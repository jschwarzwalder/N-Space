using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RotatealongAxis : MonoBehaviour {

    public Transform up;
    public Transform center;
    public Vector3 direction;

	// Update is called once per frame
	void Update () {
        Vector3 rotation = (-up.position + center.position).normalized;

        transform.localRotation = Quaternion.LookRotation(-rotation);
        transform.Rotate(direction);
	}
}
