using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DistanceInput : InputComponent {

    public Transform target;
    public float range;

    public override Quaternion GetRotation() {
        return new Quaternion(0,0,0,0);
    }

    public override float GetAxis() {
        return Vector3.Distance(transform.position, target.position);
    }

    public override float GetAxisRaw() {
        float distance = Vector3.Distance(transform.position, target.position);
        return distance <= range ? 1f : 0f;
    }

    public override bool GetButton() {
        throw new NotImplementedException();
    }

    public override bool GetButtonDown() {
        throw new NotImplementedException();
    }
}
