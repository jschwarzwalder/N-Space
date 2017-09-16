using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InputManager : MonoBehaviour {
    public static InputManager instance;

    Dictionary<string, InputComponent> inputs;

    void Awake() {
        instance = this;
        inputs = new Dictionary<string, InputComponent>();
    }

    public static void SetInput(InputComponent input) {
        instance.inputs.Add(input.id, input);
    }

    public static Quaternion GetRotation(string id) {
        return instance.inputs[id].GetRotation();
    }

    public static float GetAxis(string id) {
        return instance.inputs[id].GetAxis();
    }

    public static float GetAxisRaw(string id) {
        return instance.inputs[id].GetAxisRaw();
    }

    public static bool GetButton(string id) {
        return instance.inputs[id].GetButton();
    }

    public static bool GetButtonDown(string id) {
        return instance.inputs[id].GetButtonDown();
    }


}
