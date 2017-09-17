using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FlySimple : MonoBehaviour {

	public float speed = 50.0f;
	public float rotateSpeed = 25.0f;
	public float damp = 1;

	// Use this for initialization
	void Start () {
		
	}

	float _rotationAmount;
	float _rotationAmountVelocity;

	void FixedUpdate () {
		float transAmount = speed * Time.deltaTime;
		float rotateAmount = rotateSpeed * Time.deltaTime;	

		//Keyboard controls
		if(Input.GetKey("up")){
			//pitch ship down by rotateAmount each frame
			//transform.Rotate(rotateAmount, 0, 0);
			_rotationAmount = Mathf.SmoothDamp(_rotationAmount, rotateAmount, ref _rotationAmountVelocity, damp);
			transform.Rotate(_rotationAmount, 0, 0);
		} else {
			_rotationAmount = Mathf.SmoothDamp(_rotationAmount, 0, ref _rotationAmountVelocity, damp);
			transform.Rotate(_rotationAmount, 0, 0);
		}


		if(Input.GetKey("down")){
			//pitch ship up by rotateAmount each frame
			//transform.Rotate(-rotateAmount, 0, 0);
			_rotationAmount = Mathf.SmoothDamp(_rotationAmount, -rotateAmount, ref _rotationAmountVelocity, damp);
			transform.Rotate(_rotationAmount, 0, 0);
		} else {
			_rotationAmount = Mathf.SmoothDamp(_rotationAmount, 0, ref _rotationAmountVelocity, damp);
			transform.Rotate(_rotationAmount, 0, 0);
		}


		if(Input.GetKey("left")){
			//yaw ship left by rotateAmount each frame
			_rotationAmount = Mathf.SmoothDamp(_rotationAmount, -rotateAmount, ref _rotationAmountVelocity, damp);
			//transform.Rotate(0, -rotationAmount, 0);
			transform.Rotate(0, _rotationAmount, 0);
		} else {
			_rotationAmount = Mathf.SmoothDamp(_rotationAmount, 0, ref _rotationAmountVelocity, damp);
			transform.Rotate(0, _rotationAmount, 0);
		}


		if(Input.GetKey("right")){
			//yaw ship right by rotateAmount each frame
			//transform.Rotate(0, rotateAmount, 0);
			_rotationAmount = Mathf.SmoothDamp(_rotationAmount, rotateAmount, ref _rotationAmountVelocity, damp);
			transform.Rotate(0, _rotationAmount, 0);
		} else {
			_rotationAmount = Mathf.SmoothDamp(_rotationAmount, 0, ref _rotationAmountVelocity, damp);
			transform.Rotate(0, _rotationAmount, 0);
		}

		if(Input.GetKey("a")){
			//roll ship  left by rotateAmount each frame
			//transform.Rotate(0, 0, rotateAmount);
			_rotationAmount = Mathf.SmoothDamp(_rotationAmount, rotateAmount, ref _rotationAmountVelocity, damp);
			transform.Rotate(0, 0, _rotationAmount);
		} else {
			_rotationAmount = Mathf.SmoothDamp(_rotationAmount, 0, ref _rotationAmountVelocity, damp);
			transform.Rotate(0, 0, _rotationAmount);
		}


		if(Input.GetKey("d")){
			//roll ship right by rotateAmount each frame
			//transform.Rotate(0,0, -rotateAmount);
			_rotationAmount = Mathf.SmoothDamp(_rotationAmount, -rotateAmount, ref _rotationAmountVelocity, damp);
			transform.Rotate(0,0, _rotationAmount);
		} else {
			_rotationAmount = Mathf.SmoothDamp(_rotationAmount, 0, ref _rotationAmountVelocity, damp);
			transform.Rotate(0,0, _rotationAmount);
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

		//set speed
		if(Input.GetKey("0")){
			speed = 0;
		}
		if(Input.GetKey("1")){
			speed = 25;
		}
		if(Input.GetKey("2")){
			speed = 50;
		}
		if(Input.GetKey("3")){
			speed = 75;
		}
		if(Input.GetKey("4")){
			speed = 100;
		}


		//Move ship forward in facing direction
		 transform.position += transform.forward * transAmount;
	}
}
