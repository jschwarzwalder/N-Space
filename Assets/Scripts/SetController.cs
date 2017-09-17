using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR;
using UnityEngine.XR.WSA.Input;

public class SetController : MonoBehaviour {

    public bool connected;
    public PositionPoint position;

    // Update is called once per frame
    void Update()
    {

        if (!connected) {
            if (GetComponentInChildren<LeftController>() != null) {
                position.target = GetComponentInChildren<LeftController>().transform;
                connected = true;
            }
        }
        
    }
}
