using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class CustomController : MonoBehaviour
{
    private ControllerViewItem controllerView;
    private bool initialized = false;

    private Dictionary<ControllerMapping.Button, InputStateCell> buttons;
    private Dictionary<ControllerMapping.Stick, AnalogKnobComponent> analogSticks;

    public void SetMapping(ControllerMapping mapping)
    {
        if (this.initialized)
        {
            throw new InvalidOperationException("Cannot set mapping multiple times");
        }

        this.controllerView = this.GetComponent<ControllerViewItem>();
        Debug.Assert(this.controllerView != null);

        this.buttons = mapping.Buttons.ToDictionary(b => b, b => this.controllerView.AddToggleInput(b.label));
        this.analogSticks = mapping.Sticks.ToDictionary(s => s, s => this.controllerView.AddAnalogKnob(s.label));

        this.initialized = true;
    }

    void Update()
    {
        if (!this.initialized)
        {
            return;
        }

        foreach (var button in this.buttons)
        {
            button.Value.Pressed = Input.GetButton(button.Key.buttonId);
        }

        foreach (var stick in this.analogSticks)
        {
            if (!string.IsNullOrEmpty(stick.Key.buttonId))
            {
                stick.Value.Pressed = Input.GetButton(stick.Key.buttonId);
            }

            if (!string.IsNullOrEmpty(stick.Key.xAxisId))
            {
                stick.Value.KnobX = Input.GetAxis(stick.Key.xAxisId);
            }

            if (!string.IsNullOrEmpty(stick.Key.yAxisId))
            {
                stick.Value.KnobY = Input.GetAxis(stick.Key.yAxisId);
            }
        }
	}
}
