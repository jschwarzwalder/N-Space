using System;
using System.Collections.Generic;

using UnityEngine;
using UnityEngine.XR.WSA.Input;


public class ConsoleManager : MonoBehaviour
{
    private struct InteractionSourceData
    {
        public InteractionManagerController controllerView;
    }

    public PropertyListComponent propertyList;
    public LogViewComponent logView;
    public Transform controllerView;
    public GameObject markerPrefab;
    public GameObject controllerViewItemPrefab;

    private Dictionary<uint, InteractionSourceData> interactionSourceData = new Dictionary<uint, InteractionSourceData>();

    private class DebugHandler : ILogHandler
    {
        ConsoleManager manager;

        public DebugHandler(ConsoleManager manager)
        {
            this.manager = manager;
        }

        public void LogException(Exception exception, UnityEngine.Object context)
        {
            if (this.manager.logView != null)
            {
                this.manager.logView.LogLine(exception.ToString());
            }
        }

        public void LogFormat(LogType logType, UnityEngine.Object context, string format, params object[] args)
        {
            if (this.manager.logView != null)
            {
                this.manager.logView.LogLine(string.Format(format, args));
            }
        }
    }

    // Use this for initialization
    void Start()
    {
        Debug.Assert(this.logView != null);
        Debug.unityLogger.logHandler = new DebugHandler(this);
        Debug.Log("Logging enabled");
        Debug.Assert(this.propertyList != null);
        Debug.Assert(this.markerPrefab != null);

        InteractionManager.InteractionSourceDetected += InteractionManager_InteractionSourceDetected; // += this.InteractionManager_InteractionSourceDetected;
        InteractionManager.InteractionSourceLost += this.InteractionManager_InteractionSourceLost;
        InteractionManager.InteractionSourcePressed += this.InteractionManager_InteractionSourcePressed;
        InteractionManager.InteractionSourceReleased += this.InteractionManager_InteractionSourceReleased;
        InteractionManager.InteractionSourceUpdated += this.InteractionManager_InteractionSourceUpdated;
	}
    #region InteractionManager controllers

    private void InteractionManager_InteractionSourceUpdated(InteractionSourceUpdatedEventArgs obj)
    {
        this.UpdateSource(obj.state);
    }

    private void InteractionManager_InteractionSourceReleased(InteractionSourceReleasedEventArgs obj)
    {
        this.UpdateSource(obj.state);
    }

    private void InteractionManager_InteractionSourcePressed(InteractionSourcePressedEventArgs obj)
    {
        this.UpdateSource(obj.state);
    }

    private void InteractionManager_InteractionSourceLost(InteractionSourceLostEventArgs obj)
    {
        this.propertyList.RemoveProperty("Source " + obj.state.source.id.ToString());

        InteractionSourceData data;
        if (this.interactionSourceData.TryGetValue(obj.state.source.id, out data))
        {
            GameObject.Destroy(data.controllerView.gameObject);
            this.interactionSourceData.Remove(obj.state.source.id);
        }
    }

    private void InteractionManager_InteractionSourceDetected(InteractionSourceDetectedEventArgs obj)
    {
        this.UpdateSource(obj.state);
    }

    private void UpdateSource(InteractionSourceState state)
    {
        InteractionSourceData data;
        if (!this.interactionSourceData.TryGetValue(state.source.id, out data))
        {
            data = new InteractionSourceData();

            Vector3 position;
            Quaternion orientation;

            // Here is out documentation on pointer vs grip interaction source mode:
            //https://developer.microsoft.com/en-us/windows/mixed-reality/gestures_and_motion_controllers_in_unity#grip_pose_vs._pointing_pose
            if (!state.sourcePose.TryGetPosition(out position, InteractionSourceNode.Pointer))
            {
                position = Vector3.zero;
            }

            if (!state.sourcePose.TryGetRotation(out orientation, InteractionSourceNode.Pointer))
            {
                orientation = Quaternion.identity;
            }

            var controllerViewObj = GameObject.Instantiate(this.controllerViewItemPrefab, this.controllerView, false);
            data.controllerView = controllerViewObj.AddComponent<InteractionManagerController>();

            this.interactionSourceData.Add(state.source.id, data);
        }

        data.controllerView.UpdateFromState(state);
    }

    #endregion

    void Update()
    {
        this.propertyList.UpdateProperty("Head Position", UnityEngine.XR.InputTracking.GetLocalPosition(UnityEngine.XR.XRNode.Head).ToString());
        this.propertyList.UpdateProperty("Head Direction", UnityEngine.XR.InputTracking.GetLocalRotation(UnityEngine.XR.XRNode.Head).eulerAngles.ToString());
        this.propertyList.UpdateProperty("Left Hand",
            string.Format("{0} {1}",
            UnityEngine.XR.InputTracking.GetLocalPosition(UnityEngine.XR.XRNode.LeftHand).ToString(),
            UnityEngine.XR.InputTracking.GetLocalRotation(UnityEngine.XR.XRNode.LeftHand).eulerAngles.ToString()));
        this.propertyList.UpdateProperty("Right Hand",
            string.Format("{0} {1}",
            UnityEngine.XR.InputTracking.GetLocalPosition(UnityEngine.XR.XRNode.RightHand).ToString(),
            UnityEngine.XR.InputTracking.GetLocalRotation(UnityEngine.XR.XRNode.RightHand).eulerAngles.ToString()));
    }

    public void UpdateProperty(string label, string value)
    {
        this.propertyList.UpdateProperty(label, value);
    }

    public void RemoveProperty(string label)
    {
        this.propertyList.RemoveProperty(label);
    }

    public void AddController(ControllerMapping mapping, string type = "")
    {
        var controllerViewObj = GameObject.Instantiate(this.controllerViewItemPrefab, this.controllerView, false);
        var customController = controllerViewObj.AddComponent<CustomController>();
        customController.SetMapping(mapping);

        var controllerViewItem = controllerViewObj.GetComponent<ControllerViewItem>();
        if(controllerViewItem != null)
        {
            controllerViewItem.typeText.text = type;
        }
    }
}
