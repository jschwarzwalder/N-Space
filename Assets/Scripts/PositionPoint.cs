using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PositionPoint : MonoBehaviour {

    public Transform target;
    public Vector3 displacment;
	// Update is called once per frame
	void Update () {
        if (target != null) {
            transform.position = target.position - displacment;
        }
	}
}
