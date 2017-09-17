using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RotateByAxis : MonoBehaviour {

    public Transform refPointOne;
    public Transform refPointTwo;
    public Vector3 direction;


    

    // Update is called once per frame
    void Update() {
        Vector3 rotationDirection = (refPointOne.position - refPointTwo.position).normalized;
        transform.rotation = Quaternion.LookRotation(rotationDirection);
    }
}
