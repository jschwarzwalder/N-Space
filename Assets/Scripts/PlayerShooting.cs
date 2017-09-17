using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class PlayerShooting : MonoBehaviour {

	public int damagePerShot = 20;
	public float timeBetweenBullets = 0.15f;
	public float range = 100f;
	//public GameObject explosion;

	float timer;
	Ray shootRay;
	RaycastHit shootHit;
	int shootableMask;
	ParticleSystem gunParticles;
	LineRenderer gunLine;
	AudioSource gunAudio;
	Light gunLight;
	float effectsDisplayTime = 0.2f;

	void Awake(){
		shootableMask = LayerMask.GetMask("shootable");
		gunParticles = GetComponent<ParticleSystem>();
		gunLine = GetComponent<LineRenderer>();
		gunAudio = GetComponent<AudioSource>();
		gunLight = GetComponent<Light>();
	}
	
	// Update is called once per frame
	void Update () {
		timer += Time.deltaTime;

		if(Input.GetButton("Jump") && timer >= timeBetweenBullets){
			Shoot();
		}

		if(timer >= timeBetweenBullets * effectsDisplayTime){
			DisableEffects();
		}
	}

	void Shoot(){
		timer = 0f;

		gunAudio.Play();

		gunLight.enabled = true;

		gunParticles.Stop();
		gunParticles.Play();

		gunLine.enabled = true;
		gunLine.SetPosition(0, transform.position);

		shootRay.origin = transform.position;
		shootRay.direction = transform.forward; // ray currently shoots straight down

		if(Physics.Raycast (shootRay, out shootHit, range)){
			/* EnemyHealth enemyHealth = shootHit.collider.GetComponent<EnemyHealth>();
				if(enemyHealth != null){
					enemyHealth.TakeDamage (damagePerShot, shootHit.point);
				}
			*/
			if(shootHit.transform.gameObject.tag == "Enemy"){
				Debug.Log(shootHit.transform.gameObject.name + " has been hit");
				//Destroy(shootHit.transform.gameObject);
				//Instantiate(explosion, transform.position, transform.rotation);
				Explode explosion = shootHit.transform.gameObject.GetComponent<Explode>();
				explosion.Expode();
			}
			gunLine.SetPosition(1, shootHit.point);
		} else {
			gunLine.SetPosition(1, shootRay.origin + shootRay.direction * range);
		}
	}

	public void DisableEffects(){
		gunLine.enabled = false;
		gunLight.enabled = false;
	}
}
