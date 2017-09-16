using UnityEngine;
using UnityEngine.XR.WSA.Input;

public class InteractionManagerController : MonoBehaviour
{
    private ControllerViewItem controllerView;

    private InputStateCell selectCell;
    private InputStateCell graspedCell;
    private InputStateCell menuCell;
    private AnalogKnobComponent thumbstickKnob;
    private AnalogKnobComponent touchpadKnob;

    private bool initialized = false;

    private void Initialize()
    {
        if (this.initialized)
        {
            return;
        }

        this.controllerView = this.GetComponent<ControllerViewItem>();
        Debug.Assert(this.controllerView != null);

        this.selectCell = this.controllerView.AddToggleInput("S");
        this.graspedCell = this.controllerView.AddToggleInput("G");
        this.menuCell = this.controllerView.AddToggleInput("M");
        this.thumbstickKnob = this.controllerView.AddAnalogKnob("TS");
        this.thumbstickKnob.Touched = true;
        this.touchpadKnob = this.controllerView.AddAnalogKnob("TP");

        this.initialized = true;
    }

    void Start ()
    {
        this.Initialize();
    }

    internal void UpdateFromState(InteractionSourceState state)
    {
        this.Initialize();
        switch (state.source.handedness)
        {
            case InteractionSourceHandedness.Right:
                this.controllerView.typeText.text = "Right Motion";
                break;
            case InteractionSourceHandedness.Left:
                this.controllerView.typeText.text = "Left Motion";
                break;
            default:
                this.controllerView.typeText.text = "Unkwn Motion";
                break;
        }

        this.controllerView.idText.text = state.source.id.ToString();

        Vector3 position;
        // Here is out documentation on pointer vs grip interaction source mode:
        //https://developer.microsoft.com/en-us/windows/mixed-reality/gestures_and_motion_controllers_in_unity#grip_pose_vs._pointing_pose
        if (state.sourcePose.TryGetPosition(out position, InteractionSourceNode.Pointer))
        { 
            this.controllerView.posText.text = position.ToString();
        }

        Quaternion orientation;
        if(state.sourcePose.TryGetRotation(out orientation, InteractionSourceNode.Pointer))
        // todo add a check for value here? 
        {
            this.controllerView.rotText.text = orientation.eulerAngles.ToString();
        }

        this.selectCell.Pressed = state.selectPressed;
        this.graspedCell.Pressed = state.grasped;
        this.menuCell.Pressed = state.menuPressed;

        this.thumbstickKnob.Pressed = state.thumbstickPressed;
        this.thumbstickKnob.KnobX = state.thumbstickPosition.x;
        this.thumbstickKnob.KnobY = state.thumbstickPosition.y;

        this.touchpadKnob.Touched = state.touchpadTouched;
        this.touchpadKnob.Pressed = state.touchpadPressed;
        this.touchpadKnob.KnobX = state.touchpadPosition.x;
        this.touchpadKnob.KnobY = state.touchpadPosition.y;

        this.controllerView.thumbstickText.text = string.Format("{0:0.000},{1:0.000}", state.thumbstickPosition.x, state.thumbstickPosition.y);
        this.controllerView.touchpadText.text = string.Format("{0:0.000},{1:0.000}", state.touchpadPosition.x, state.touchpadPosition.y);
    }
}
