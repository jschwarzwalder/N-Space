using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Relocate : MonoBehaviour {

    public Transform target;
    public Transform pointOne;
    public Transform pointTwo;
    public float displacement;

    private void Awake()
    {
        displacement = Vector3.Distance(transform.position, target.position);
    }

    public void ChangePosition() {
        transform.position = target.position + (pointOne.position - pointTwo.position).normalized * displacement;
    }

    // Update is called once per frame
    void Update () {
        ChangePosition();

    }
}
