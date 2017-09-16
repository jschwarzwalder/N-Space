using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AdjustPosition : MonoBehaviour {
    public Transform target;
    public Transform referencePoint;
    public Vector3 direction;   
    public Vector3 displacement;
    public float distance;
    // Use this for initialization
    void Awake () {
        displacement = target.position - transform.position;
        distance = Vector3.Distance(target.position, transform.position);

    }
	
	// Update is called once per frame
	void Update () {

        float refDistance = Vector3.Distance(target.position, referencePoint.position);
        transform.position = referencePoint.position + transform.forward * (refDistance - distance);
	}
}
