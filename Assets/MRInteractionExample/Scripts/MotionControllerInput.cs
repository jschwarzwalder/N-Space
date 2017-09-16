using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR;
using UnityEngine.XR.WSA.Input;

public class MotionControllerInput : MonoBehaviour
{
    public InputMode InputMode = InputMode.InteractionManagerPollingInput;
    private InputMode currentInputMode;

    public GameObject DevicePrefab;
    public Transform ControllersRoot;
    public ConsoleManager console;

    private HashSet<string> trackedConsoleProperties = new HashSet<string>();

    // Interaction Manager Input
    private readonly Dictionary<uint, Transform> imDevices = new Dictionary<uint, Transform>();

    // Unity Input
    private readonly Dictionary<string, XRNode> trackedControllers = new Dictionary<string, XRNode>();
    private readonly Dictionary<XRNode, Transform> uDevices = new Dictionary<XRNode, Transform>();

    [SerializeField]
    private ReorderableColorPallet controllerTrackingColor;

    void Start()
    {
        this.SetInputMode(this.InputMode);
    }

    private void SetInputMode(InputMode inputMode)
    {
        this.ClearTrackedConsoleProperties();

        switch (this.currentInputMode)
        {
            case InputMode.UnityInput:
                TearDownUnityInput();
                break;
            case InputMode.InteractionManagerEventInput:
                TearDownInteractionManagerEventInput();
                break;
            case InputMode.InteractionManagerPollingInput:
                TearDownInteractionManagerPollingInput();
                break;
        }

        this.currentInputMode = inputMode;

        switch (this.currentInputMode)
        {
            case InputMode.UnityInput:
                SetupUnityInput();
                break;
            case InputMode.InteractionManagerEventInput:
                SetupInteractionManagerEventInput();
                break;
            case InputMode.InteractionManagerPollingInput:
                SetupInteractionManagerPollingInput();
                break;
        }

        this.UpdateTrackedConsoleProperty("Current Input Mode: ", this.currentInputMode.ToString() + " (hit space to toggle)");
    }

    #region InteractionManagerPollingInput

    private void SetupInteractionManagerPollingInput()
    {
        foreach (var sourceState in InteractionManager.GetCurrentReading())
        {
            uint id = sourceState.source.id;

            if (id != 0 && sourceState.source.supportsPointing)
            {
                this.AddDevice(id);
            }
        }
    }

    private void UpdateInteractionManagerPollingInput()
    {
        foreach(var sourceState in InteractionManager.GetCurrentReading())
        {
            uint id = sourceState.source.id;
            var handedness = sourceState.source.handedness;

            if (!this.imDevices.ContainsKey(id))
            {
                if (id !=0 && sourceState.source.supportsPointing)
                {
                    this.AddDevice(id);
                }
            }

            this.UpdateInteractionSourceState(sourceState);

            // Buttons
            if (sourceState.selectPressed)
            {
                Debug.Log(handedness + " select pressed");
            }
            if (sourceState.menuPressed)
            {
                Debug.Log(handedness + " menu pressed");
            }
            if (sourceState.grasped)
            {
                Debug.Log(handedness + " grasped");
            }
            if (sourceState.touchpadTouched)
            {
                Debug.Log(handedness + " touchpad touched");
            }
            if (sourceState.touchpadPressed)
            {
                Debug.Log(handedness + " touchpad pressed");
            }
            if (sourceState.thumbstickPressed)
            {
                Debug.Log(handedness + " thumbstick pressed");
            }
        }
    }

    private void TearDownInteractionManagerPollingInput()
    {
        // Remove all devices from the list
        foreach (var sourceState in InteractionManager.GetCurrentReading())
        {
            uint id = sourceState.source.id;
            this.RemoveDevice(id);
        }
    }

    #endregion InteractionManagerPollingInput

    #region InteractionManagerEventInput

    public void SetupInteractionManagerEventInput()
    {
        InteractionManager.InteractionSourceDetected += this.InteractionManager_InteractionSourceDetected;
        InteractionManager.InteractionSourceLost += InteractionManager_InteractionSourceLost;
        InteractionManager.InteractionSourceUpdated += InteractionManager_InteractionSourceUpdated;
        InteractionManager.InteractionSourcePressed += InteractionManager_InteractionSourcePressed;

        // Add any already detected devices to the list
        foreach (var sourceState in InteractionManager.GetCurrentReading())
        {
            uint id = sourceState.source.id;

            if (sourceState.source.supportsPointing)
            {
                this.AddDevice(id);
            }
        }
    }

    private void InteractionManager_InteractionSourcePressed(InteractionSourcePressedEventArgs eventArgs)
    {
        // Fire haptic feedback
        //InteractionController controller;
        //if (eventArgs.state.source.TryGetController(out controller))
        //{
        //    controller.StartHapticBuzz(0.1f, 0.1f);
        //}
        Debug.Log(eventArgs.state.source.handedness + " controller " + eventArgs.pressType + " pressed");
    }

    private void InteractionManager_InteractionSourceUpdated(InteractionSourceUpdatedEventArgs eventArgs)
    {
        this.UpdateInteractionSourceState(eventArgs.state);
    }

    private void InteractionManager_InteractionSourceLost(InteractionSourceLostEventArgs eventArgs)
    {
        uint id = eventArgs.state.source.id;

        this.RemoveDevice(id);
    }

    private void InteractionManager_InteractionSourceDetected(InteractionSourceDetectedEventArgs eventArgs)
    {
        uint id = eventArgs.state.source.id;

        if (eventArgs.state.source.supportsPointing)
        {
            this.AddDevice(id);
        }
    }

    private void TearDownInteractionManagerEventInput()
    {
        InteractionManager.InteractionSourceDetected -= InteractionManager_InteractionSourceDetected;
        InteractionManager.InteractionSourceLost -= InteractionManager_InteractionSourceLost;
        InteractionManager.InteractionSourceUpdated -= InteractionManager_InteractionSourceUpdated;
        InteractionManager.InteractionSourcePressed -= InteractionManager_InteractionSourcePressed;

        // Remove all devices from the list
        foreach (var sourceState in InteractionManager.GetCurrentReading())
        {
            uint id = sourceState.source.id;
            this.RemoveDevice(id);
        }
    }

    #endregion InteractionManagerEventInput

    #region InteractionManagerCommon

    private void UpdateInteractionSourceState(InteractionSourceState sourceState)
    {
        uint id = sourceState.source.id;
        var handedness = sourceState.source.handedness;

        if (imDevices.ContainsKey(id))
        {
            var sourcePose = sourceState.sourcePose;
            Vector3 position;
            Quaternion rotation;

            // Here is out documentation on pointer vs grip interaction source mode:
            //https://developer.microsoft.com/en-us/windows/mixed-reality/gestures_and_motion_controllers_in_unity#grip_pose_vs._pointing_pose
            if (sourcePose.TryGetPosition(out position, InteractionSourceNode.Pointer) &&
                sourcePose.TryGetRotation(out rotation, InteractionSourceNode.Pointer)) // defualts to pointer
            {
                SetTransform(imDevices[id], position, rotation);
                this.UpdateTrackedConsoleProperty("Update " + transform.gameObject.name, string.Format("{0}{1}", position, rotation));
            }

            var lostRiskIndicator = imDevices[id].GetComponent<LostRiskIndicator>();

            this.UpdateTrackedConsoleProperty(handedness + " source lost risk: ", string.Format("{0:0.000}", sourceState.properties.sourceLossRisk));
            this.UpdateTrackedConsoleProperty(handedness + " loss mitigation dir: ", string.Format("({0:0.00}, {1:0.00}, {2:0.00})",
                sourceState.properties.sourceLossMitigationDirection.x, sourceState.properties.sourceLossMitigationDirection.y,
                sourceState.properties.sourceLossMitigationDirection.z));

            var sourceLostRisk = (float)sourceState.properties.sourceLossRisk;
            var positionalAccuracy = sourceState.sourcePose.positionAccuracy;

            // Offset lost risk so it only shows red if positional accuracy is approximate
            var controllerColor = sourceLostRisk * 0.9f
                + (positionalAccuracy == InteractionSourcePositionAccuracy.High ? 0.1f : 0.0f);

            if (controllerColor >= 0.0f && controllerColor <= 1.0f && controllerTrackingColor != null)
            {
                lostRiskIndicator.SetColor(controllerTrackingColor.GetColorForValue(controllerColor));
                lostRiskIndicator.SetDirectionIndicator(sourceState.properties.sourceLossMitigationDirection);
            }
        }

        // Update properties
        this.UpdateTrackedConsoleProperty(handedness + " Select Value", string.Format("{0:0.000}", sourceState.selectPressedAmount));
        this.UpdateTrackedConsoleProperty(handedness + " Touchpad", string.Format("{0:0.000},{1:0.000}", sourceState.touchpadPosition.x, sourceState.touchpadPosition.y));
        this.UpdateTrackedConsoleProperty(handedness + " Thumbstick", string.Format("{0:0.000},{1:0.000}", sourceState.thumbstickPosition.x, sourceState.thumbstickPosition.y));
    }

    private void AddDevice(uint id)
    {
        if (!imDevices.ContainsKey(id))
        {
            GameObject go = Instantiate(this.DevicePrefab, this.ControllersRoot);
            go.name = "Controller " + id;
            imDevices[id] = go.transform;
        }

        this.console.UpdateProperty("Detected Motion Controllers", string.Format("{0}", this.imDevices.Keys.Count));
    }

    private void RemoveDevice(uint id)
    {
        if (imDevices.ContainsKey(id))
        {
            Destroy(imDevices[id].gameObject);
            imDevices.Remove(id);
        }

        this.console.UpdateProperty("Detected Motion Controllers", string.Format("{0}", this.imDevices.Keys.Count));
    }

    #endregion InteractionManagerCommon

    #region UnityInput

    private void SetupUnityInput()
    {
        UpdateTrackedControllers();
    }

    private void UpdateTrackedControllers()
    {
        var detectedControllers = new List<string>(Input.GetJoystickNames());

        // compare detected with tracked
        foreach(var trackedContrller in this.trackedControllers.Keys)
        {
            if (detectedControllers.Contains(trackedContrller))
            {
                detectedControllers.Remove(trackedContrller);
            }
            else
            {
                RemoveDevice(trackedContrller);
            }
        }

        // add any new controllers
        foreach (var name in detectedControllers)
        {
            if (name.Contains("Spatial Controller")) // Motion Controllers
            {
                XRNode? nodeType = null;

                if (name.Contains("Left"))
                {
                    nodeType = XRNode.LeftHand;
                }
                else if (name.Contains("Right"))
                {
                    nodeType = XRNode.RightHand;
                }

                if (nodeType.HasValue)
                {
                    if (!uDevices.ContainsKey(nodeType.Value))
                    {
                        AddDevice(name, nodeType.Value);
                    }
                }
            }
        }
    }

    private void UpdateUnityInput()
    {
        UpdateTrackedControllers();

        // Motion
        foreach (XRNode nodeType in uDevices.Keys)
        {
            var position = InputTracking.GetLocalPosition(nodeType);
            var rotation = InputTracking.GetLocalRotation(nodeType);
            
            SetTransform(uDevices[nodeType], position, rotation);
        }

        // Buttons
        if (Input.GetButtonDown("MotionController-Select-Left"))
        {
            Debug.Log("Left select pressed");
        }
        if (Input.GetButtonDown("MotionController-Select-Right"))
        {
            Debug.Log("Right select pressed");
        }
        if (Input.GetButtonDown("MotionController-Menu-Left"))
        {
            Debug.Log("Left menu pressed");
        }
        if (Input.GetButtonDown("MotionController-Menu-Right"))
        {
            Debug.Log("Right menu pressed");
        }
        if (Input.GetButtonDown("MotionController-Grasp-Left"))
        {
            Debug.Log("Left Grasp pressed");
        }
        if (Input.GetButtonDown("MotionController-Grasp-Rgiht"))
        {
            Debug.Log("Right Grasp pressed");
        }
        if (Input.GetButtonDown("MotionController-TouchpadTouched-Left"))
        {
            Debug.Log("Left touchpad touched");
        }
        if (Input.GetButtonDown("MotionController-TouchpadTouched-Right"))
        {
            Debug.Log("Right touchpad touched");
        }
        if (Input.GetButtonDown("MotionController-TouchpadPressed-Left"))
        {
            Debug.Log("Left touchpad pressed");
        }
        if (Input.GetButtonDown("MotionController-TouchpadPressed-Right"))
        {
            Debug.Log("Right touchpad pressed");
        }
        if (Input.GetButtonDown("MotionController-ThumbstickPressed-Left"))
        {
            Debug.Log("Left thumbstick pressed");
        }
        if (Input.GetButtonDown("MotionController-ThumbstickPressed-Right"))
        {
            Debug.Log("Right thumbstick pressed");
        }

        // Axes
        this.UpdateTrackedConsoleProperty("Left Select Pressed Value", string.Format("{0}", Input.GetAxis("MotionController-SelectPressedValue-Left")));
        this.UpdateTrackedConsoleProperty("Right Select Pressed Value", string.Format("{0}", Input.GetAxis("MotionController-SelectPressedValue-Right")));
        this.UpdateTrackedConsoleProperty("Left Touchpad", string.Format("{0},{1}", Input.GetAxis("MotionController-TouchpadX-Left"), Input.GetAxis("MotionController-TouchpadY-Left")));
        this.UpdateTrackedConsoleProperty("Right Touchpad", string.Format("{0},{1}", Input.GetAxis("MotionController-TouchpadX-Right"), Input.GetAxis("MotionController-TouchpadY-Right")));
        this.UpdateTrackedConsoleProperty("Left Thumbstick", string.Format("{0},{1}", Input.GetAxis("MotionController-ThumbstickX-Left"), Input.GetAxis("MotionController-ThumbstickY-Left")));
        this.UpdateTrackedConsoleProperty("Right Thumbstick", string.Format("{0},{1}", Input.GetAxis("MotionController-ThumbstickX-Right"), Input.GetAxis("MotionController-ThumbstickY-Right")));
    }

    private void TearDownUnityInput()
    {
        foreach (var controllerName in Input.GetJoystickNames())
        {
            if (trackedControllers.ContainsKey(controllerName))
            {
                RemoveDevice(controllerName);
            }
        }
    }

    private void AddDevice(string name, XRNode nodeType)
    {
        if (!uDevices.ContainsKey(nodeType))
        {
            GameObject go = Instantiate(this.DevicePrefab, this.ControllersRoot);
            go.name = "Controller " + nodeType;
            uDevices[nodeType] = go.transform;
            trackedControllers[name] = nodeType;
        }

        this.console.UpdateProperty("Detected Motion Controllers", string.Format("{0}", this.uDevices.Keys.Count));
    }

    private void RemoveDevice(string name)
    {
        if (this.trackedControllers.ContainsKey(name))
        {
            XRNode nodeType = this.trackedControllers[name];

            if (uDevices.ContainsKey(nodeType))
            {
                Destroy(uDevices[nodeType].gameObject);
                uDevices.Remove(nodeType);
                Debug.Log("Removed device " + name);
            }
            else
            {
                Debug.Log("Tracked controller: " + name + " not on devices list!");
            }

            trackedControllers.Remove(name);
        }

        this.console.UpdateProperty("Detected Motion Controllers", string.Format("{0}", this.uDevices.Keys.Count));
    }

    #endregion UnityInput

    void Update()
    {
        // Toggle input mode with space bar
        if (Input.inputString.Contains(" "))
        {
            var next = (int)this.currentInputMode + 1;
            var max = Enum.GetNames(InputMode.GetType()).Length;
            this.InputMode = (InputMode)(next % max);
        }

        if (this.currentInputMode != this.InputMode)
        {
            this.SetInputMode(this.InputMode);
        }

        if (this.InputMode == InputMode.UnityInput)
        {
            UpdateUnityInput();
        }
        else if (this.InputMode == InputMode.InteractionManagerPollingInput)
        {
            UpdateInteractionManagerPollingInput();
        }

        // Show keyboard input
        if (!String.IsNullOrEmpty(Input.inputString))
        {   
            this.console.UpdateProperty("Last Key(s) Pressed", string.Format("{0}", Input.inputString));
        }
    }

    private void SetTransform(Transform t, Vector3 position, Quaternion rotation)
    {
        t.localPosition = position;
        t.localRotation = rotation;
    }

    private void UpdateTrackedConsoleProperty(string name, string value)
    {
        if (console != null)
        {
            this.trackedConsoleProperties.Add(name);
            this.console.UpdateProperty(name, value);
        }
    }

    private void ClearTrackedConsoleProperties()
    {
        if (this.console != null)
        {
            foreach (var property in this.trackedConsoleProperties)
            {
                console.RemoveProperty(property);
            }

            this.trackedConsoleProperties = new HashSet<string>();
        }
    }

    private void OnDestroy()
    {
        this.ClearTrackedConsoleProperties();

        switch (InputMode)
        {
            case InputMode.UnityInput:
                TearDownUnityInput();
                break;
            case InputMode.InteractionManagerEventInput:
                TearDownInteractionManagerEventInput();
                break;
            case InputMode.InteractionManagerPollingInput:
                TearDownInteractionManagerPollingInput();
                break;
        }
    }
}
