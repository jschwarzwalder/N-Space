using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LeftController : MonoBehaviour {

    

    private void Awake()
    {
        GameObject turret = GameObject.FindGameObjectWithTag("Turret");
        turret.transform.SetParent(transform);
        turret.transform.localPosition = Vector3.zero;
    }

}
