using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyMovement : MonoBehaviour {

	public Transform player;
	public int moveSpeed = 25;
	public int MaxDist = 50;
	public int MinDist = 5;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		transform.LookAt(player);

		if(Vector3.Distance(transform.position, player.position) >= MinDist){
			transform.position += transform.forward * moveSpeed * Time.deltaTime;

			if(Vector3.Distance(transform.position, player.position) <= MaxDist){
				//PlayerShooting shot = gameObject.GetComponent<PlayerShooting>();
				//shot.Shoot();
			}
		}
	}
}
