using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ResetTransform : MonoBehaviour {

	// Use this for initialization
	void Awake () {
        transform.SetParent(null);
	}
	
	// Update is called once per frame
	void Update () {
		
	}
}
