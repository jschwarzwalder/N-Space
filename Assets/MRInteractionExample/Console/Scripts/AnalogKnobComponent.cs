using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class AnalogKnobComponent : MonoBehaviour
{
    public Text labelText;
    public Image background;
    public Color colorOn;
    public Color colorOff;
    public RectTransform knob;

    public bool Touched
    {
        get
        {
            return this.knob.gameObject.activeSelf;
        }
        set
        {
            this.knob.gameObject.SetActive(value);
        }
    }

    public bool Pressed
    {
        get
        {
            return this.background.color == this.colorOn;
        }
        set
        {
            this.background.color = value ? this.colorOn : this.colorOff;
        }
    }

    public double KnobX
    {
        get
        {
            return this.knob.localPosition.x / (this.background.rectTransform.rect.width / 4);
        }
        set
        {
            this.knob.localPosition = new Vector3(
                (float)value * (this.background.rectTransform.rect.width / 4),
                this.knob.localPosition.y,
                this.knob.localPosition.z);
        }
    }

    public double KnobY
    {
        get
        {
            return this.knob.localPosition.y / this.background.rectTransform.rect.height / 2;
        }
        set
        {
            this.knob.localPosition = new Vector3(
                this.knob.localPosition.x,
                (float)value * (this.background.rectTransform.rect.height / 4),
                this.knob.localPosition.z);
        }
    }
}
