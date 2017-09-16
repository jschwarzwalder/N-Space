using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RotateByAxis : MonoBehaviour {

    public Transform rotationTransform;
    public Vector3 direction;


    public Quaternion GetTargetRotation() {

        Quaternion targetRotation = new Quaternion(
            (direction.x != 0) ? rotationTransform.rotation.x : transform.rotation.x,
            (direction.y != 0) ? rotationTransform.rotation.y : transform.rotation.y,
        (direction.z != 0) ? rotationTransform.rotation.z : transform.rotation.z,
        transform.rotation.w
                                     );
        return targetRotation;
    }

    // Update is called once per frame
    void Update() {
        Quaternion targetRotation = GetTargetRotation();
        transform.rotation = targetRotation;
    }
}
