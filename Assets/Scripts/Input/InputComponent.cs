using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class InputComponent : MonoBehaviour {
    public string id;
    void Awake() {
        SetInput();
    }
    public void SetInput() {
        InputManager.SetInput(this);
    }
    public abstract Quaternion GetRotation();
    public abstract float GetAxis();
    public abstract float GetAxisRaw();
    public abstract bool GetButton();
    public abstract bool GetButtonDown();
}
