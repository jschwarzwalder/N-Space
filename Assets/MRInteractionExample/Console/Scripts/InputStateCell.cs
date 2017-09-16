using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class InputStateCell : MonoBehaviour
{
    public Text labelText;
    public Image background;
    public Color colorOn;
    public Color colorOff;

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
}
