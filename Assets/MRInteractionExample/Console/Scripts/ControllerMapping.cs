using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ControllerMapping
{
    public struct Button
    {
        public string label;
        public string buttonId;
    }

    public struct Stick
    {
        public string label;
        public string buttonId;
        public string xAxisId;
        public string yAxisId;
    }

    public Button[] Buttons { get; set; }
    public Stick[] Sticks { get; set; }
}
