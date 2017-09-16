using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InputTests : MonoBehaviour {

    public List<string> ids;
	
	// Update is called once per frame
	void Update () {
        foreach(string id in ids) {
            Debug.Log(id + ":  " + InputManager.GetRotation(id));
            Debug.Log(id + ":  " + InputManager.GetAxis(id));
            Debug.Log(id + ":  " + InputManager.GetAxisRaw(id));
        }
	}
}
