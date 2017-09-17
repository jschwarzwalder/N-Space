using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FlySimple : MonoBehaviour {

	public float speed = 50.0f;
	public float rotateSpeed = 25.0f;

	// Use this for initialization
	void Start () {
		
	}

	void FixedUpdate () {
		float transAmount = speed * Time.deltaTime;
		float rotateAmount = rotateSpeed * Time.deltaTime;	

		//Keyboard controls
		if(Input.GetKey("up")){
			//pitch ship down by rotateAmount each frame
			transform.Rotate(rotateAmount, 0, 0);
		}
		if(Input.GetKey("down")){
			//pitch ship up by rotateAmount each frame
			transform.Rotate(-rotateAmount, 0, 0);
		}
		if(Input.GetKey("left")){
			//yaw ship left by rotateAmount each frame
			transform.Rotate(0, -rotateAmount, 0);
		}
		if(Input.GetKey("right")){
			//yaw ship right by rotateAmount each frame
			transform.Rotate(0, rotateAmount, 0);
		}
		if(Input.GetKey("a")){
			//roll ship  left by rotateAmount each frame
			transform.Rotate(0, 0, rotateAmount);
		}
		if(Input.GetKey("d")){
			//roll ship right by rotateAmount each frame
			transform.Rotate(0,0, -rotateAmount);
		}

		//Flight Stick controls

		//Pitch ship forward by rotateAmount each frame
		if(InputManager.GetAxisRaw("in") == 1){
			//pitch ship down by rotateAmount each frame
			transform.Rotate(rotateAmount, 0, 0);
		}
		if(InputManager.GetAxisRaw("out") == 1){
			//pitch ship up by rotateAmount each frame
			transform.Rotate(-rotateAmount, 0, 0);
		}
		if(Input.GetKey("left")){
			//yaw ship left by rotateAmount each frame
			transform.Rotate(0, -rotateAmount, 0);
		}
		if(Input.GetKey("right")){
			//yaw ship right by rotateAmount each frame
			transform.Rotate(0, rotateAmount, 0);
		}
		if(Input.GetKey("a")){
			//roll ship  left by rotateAmount each frame
			transform.Rotate(0, 0, rotateAmount);
		}
		if(Input.GetKey("d")){
			//roll ship right by rotateAmount each frame
			transform.Rotate(0,0, -rotateAmount);
		}


		//Move ship forward in facing direction
		 transform.position += transform.forward * transAmount;
	}
}
