using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class XboxControllerInput : MonoBehaviour
{
    public ConsoleManager console;

    public bool MovementEnabled = true;
    public Transform MovementRoot;

    [SerializeField]
    public float MovementSpeedScale { get; set; }

    void Start()
    {
        if (this.MovementSpeedScale == 0.0f)
        {
            this.MovementSpeedScale = 0.6f;
        }

        if (MovementRoot == null)
        {
            MovementRoot = this.transform;
        }

        // Console mappings for visuals
        Debug.Assert(this.console != null);
        this.console.AddController(new ControllerMapping()
        {
            Buttons = new ControllerMapping.Button[]
            {
                new ControllerMapping.Button { label = "A", buttonId = "Xbox-A" },
                new ControllerMapping.Button { label = "B", buttonId = "Xbox-B" },
                new ControllerMapping.Button { label = "X", buttonId = "Xbox-X" },
                new ControllerMapping.Button { label = "Y", buttonId = "Xbox-Y" },
                new ControllerMapping.Button { label = "LB", buttonId = "Xbox-LB" },
                new ControllerMapping.Button { label = "RB", buttonId = "Xbox-RB" },
                new ControllerMapping.Button { label = "V", buttonId = "Xbox-View" },
                new ControllerMapping.Button { label = "M", buttonId = "Xbox-Menu" }
            },
            Sticks = new ControllerMapping.Stick[]
            {
                new ControllerMapping.Stick { label = "L", buttonId = "Xbox-LS", xAxisId = "Xbox-LeftStickX", yAxisId = "Xbox-LeftStickY" },
                new ControllerMapping.Stick { label = "R", buttonId = "Xbox-RS", xAxisId = "Xbox-RightStickX", yAxisId = "Xbox-RightStickY" },
                new ControllerMapping.Stick { label = "D", buttonId = "", xAxisId = "Xbox-DPADX", yAxisId = "Xbox-DPADY" },
                new ControllerMapping.Stick { label = "T", buttonId = "", xAxisId = "Xbox-TriggerAxis", yAxisId = "" }
            }
        }, "Xbox");
	}

    void Update()
    {
        if (Input.GetButtonDown("Xbox-A"))
        {
            Debug.Log("Gamepad Xbox-A hit");
        }

        if (Input.GetButtonDown("Xbox-B"))
        {
            Debug.Log("Gamepad Xbox-B hit");
        }

        if (Input.GetButtonDown("Xbox-X"))
        {
            Debug.Log("Gamepad Xbox-X hit");
        }

        if (Input.GetButtonDown("Xbox-Y"))
        {
            Debug.Log("Gamepad Xbox-Y hit");
        }

        if (Input.GetButtonDown("Xbox-LB"))
        {
            Debug.Log("Gamepad Xbox-LB hit");
        }

        if (Input.GetButtonDown("Xbox-RB"))
        {
            Debug.Log("Gamepad Xbox-RB hit");
        }

        if (Input.GetButtonDown("Xbox-LS"))
        {
            Debug.Log("Gamepad Xbox-LS hit");
        }

        if (Input.GetButtonDown("Xbox-RS"))
        {
            Debug.Log("Gamepad Xbox-RS hit");
        }

        if (Input.GetButtonDown("Xbox-View"))
        {
            Debug.Log("Gamepad Xbox-View hit");
        }

        if (Input.GetButtonDown("Xbox-Menu"))
        {
            Debug.Log("Gamepad Xbox-Menu hit");
        }

        this.console.UpdateProperty("Xbox Controller Left Stick", string.Format("{0:0.000},{1:0.000}", Input.GetAxis("Xbox-LeftStickX"), Input.GetAxis("Xbox-LeftStickY")));
        this.console.UpdateProperty("Xbox Controller Right Stick", string.Format("{0:0.000},{1:0.000}", Input.GetAxis("Xbox-RightStickX"), Input.GetAxis("Xbox-RightStickY")));
        this.console.UpdateProperty("Xbox Controller DPAD", string.Format("{0:0.00},{1:0.00}", Input.GetAxis("Xbox-DPADX"), Input.GetAxis("Xbox-DPADY")));

        if (this.MovementEnabled)
        {
            // okay... now how about some smooth movement... :)
            float forwardAmount = Input.GetAxis("Xbox-LeftStickY");
            float strafeAmount = Input.GetAxis("Xbox-LeftStickX");
            float XRotAmount = Input.GetAxis("Xbox-RightStickX");

            Vector3 forwardDirection = Camera.main.transform.forward;

            Vector3 rightDirection = Camera.main.transform.right;

            // Align to gravity.  Since we are crossing with foward direction, we special
            // case for when forward is up or down and the cross product wouldn't work.
            if (forwardDirection == Vector3.down || forwardDirection == Vector3.up)
            {
                rightDirection = Vector3.right;
            }
            else
            {
                rightDirection = Vector3.Cross(Vector3.up, forwardDirection);
            }

            // and as above, but we are crossing with the right direction, so we need to special case
            // for exactly 1,0,0 or -1,0,0
            if (rightDirection == Vector3.right || rightDirection == Vector3.left)
            {
                forwardDirection = Vector3.forward;
            }
            else
            {
                forwardDirection = Vector3.Cross(rightDirection, Vector3.up);
            }
            Vector3 extents = new Vector3(0.2f, 0.85f, 0.1f);
            Vector3 startPos = MovementRoot.position;
            MovementRoot.position += forwardDirection * (forwardAmount * MovementSpeedScale * Time.deltaTime);
            MovementRoot.position += rightDirection * (strafeAmount * MovementSpeedScale * Time.deltaTime);
            Debug.DrawRay(Camera.main.transform.position, (MovementRoot.position - startPos).normalized);
            if (Physics.BoxCast(Camera.main.transform.position, extents, (MovementRoot.position - startPos).normalized, Quaternion.identity, 1.0f))
            {
                MovementRoot.position = startPos;
            }

            MovementRoot.RotateAround(Camera.main.transform.position, Vector3.up, XRotAmount * Time.deltaTime * 30);
        }
    }
}
