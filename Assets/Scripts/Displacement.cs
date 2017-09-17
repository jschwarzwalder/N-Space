using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Displacement : MonoBehaviour {

    public Transform start;
    public Transform end;

	// Use this for initialization
	void Start () {
        Debug.Log(start.position - end.position);
	}
	
	// Update is called once per frame
	void Update () {
		
	}
}
