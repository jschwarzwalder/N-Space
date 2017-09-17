using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ControllerInitailizer : MonoBehaviour {

    public bool initialized;
    public Transform centerPoint;
    public Transform[] controllers;

    public void CalculateCenterPoint(Transform point) {
        float y = (controllers[0].position.y - controllers[1].position.y) / 2 + controllers[1].position.y;
        float z = (controllers[0].position.z - controllers[1].position.z) / 2 + controllers[1].position.z;
        float x = (controllers[0].position.x - controllers[1].position.x) / 2 + controllers[1].position.x;
        point.transform.position = new Vector3(x,y,z);

    }
	
	// Update is called once per frame
	void Update () {
        if (initialized)
        {
            if (transform.childCount == 2)
            {
                initialized = false;
                controllers = new Transform[2];
                for (int i = 0; i < transform.childCount; i++)
                {
                    controllers[i] = transform.GetChild(i);
                }
                CalculateCenterPoint(centerPoint);
            }
        }
        else {
            CalculateCenterPoint(centerPoint);
        }
	}
}
