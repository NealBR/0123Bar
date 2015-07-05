#pragma once
#include <stdint.h>
// GameManager
struct GameManager_t1;
// UnityEngine.GameObject
struct GameObject_t10;
// FootballScript
struct FootballScript_t5;
// UnityEngine.Transform
struct Transform_t8;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// TouchRecogniser
struct  TouchRecogniser_t9  : public MonoBehaviour_t3
{
	// GameManager TouchRecogniser::gameManager
	GameManager_t1 * ___gameManager_2;
	// UnityEngine.GameObject TouchRecogniser::football
	GameObject_t10 * ___football_3;
	// FootballScript TouchRecogniser::footballScript
	FootballScript_t5 * ___footballScript_4;
	// UnityEngine.Transform TouchRecogniser::arrow
	Transform_t8 * ___arrow_5;
	// System.Boolean TouchRecogniser::isDragging
	bool ___isDragging_6;
	// UnityEngine.Vector3 TouchRecogniser::startPosition
	Vector3_t6  ___startPosition_7;
	// UnityEngine.Vector3 TouchRecogniser::difference
	Vector3_t6  ___difference_8;
};
