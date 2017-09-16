using UnityEngine;
using UnityEngine.UI;

public class ControllerViewItem : MonoBehaviour
{
    public Text typeText;
    public Text idText;

    // TODO: Generalize these
    public Text posText;
    public Text rotText;
    public Text thumbstickText;
    public Text touchpadText;

    public Transform inputGrid;
    public Transform analogKnobs;
    public GameObject inputCellPrefab;
    public GameObject analogKnobPrefab;

    public InputStateCell AddToggleInput(string label)
    {
        var newToggle = GameObject.Instantiate(this.inputCellPrefab, this.inputGrid, false).GetComponent<InputStateCell>();
        newToggle.labelText.text = label;
        return newToggle;
    }

    public AnalogKnobComponent AddAnalogKnob(string label)
    {
        var newKnob = GameObject.Instantiate(this.analogKnobPrefab, this.analogKnobs, false).GetComponent<AnalogKnobComponent>();
        newKnob.labelText.text = label;
        return newKnob;
    }
}
