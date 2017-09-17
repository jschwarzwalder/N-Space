using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DisplacmentRotation : MonoBehaviour {

    public Transform displacementTransform;
    public Vector3 displacement;
    public Vector3 direction;
   

    public Vector3 GetTargetPosition() {
           
        Vector3 targetPostition = new Vector3(
            (direction.x != 0) ? direction.x * displacementTransform.position.x + displacement.x : transform.position.x,
            (direction.y != 0) ? direction.y * displacementTransform.position.y + displacement.y : transform.position.y,
        (direction.z != 0) ?  direction.z* displacementTransform.position.z + displacement.z : transform.position.z
                                     );
        return targetPostition;
    }

	// Update is called once per frame
	void Update () {
        Vector3 targetPostition = GetTargetPosition();
        transform.LookAt(targetPostition);
	}
}
