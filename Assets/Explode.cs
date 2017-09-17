using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Explode : MonoBehaviour {
	public GameObject explosion;

	public void Expode(){
		Instantiate(explosion, transform.position, transform.rotation);
		Destroy(gameObject);
	}
}
