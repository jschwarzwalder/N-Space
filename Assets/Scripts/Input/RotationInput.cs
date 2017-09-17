using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RotationInput : InputComponent {
    public Transform target;

    public override Quaternion GetRotation() {
        return target.rotation;
    }

    public override float GetAxis() {
        return 0f;
    }

    public override float GetAxisRaw() {
        return 0f;
    }

    public override bool GetButton() {
        throw new NotImplementedException();
    }

    public override bool GetButtonDown() {
        throw new NotImplementedException();
    }
}
