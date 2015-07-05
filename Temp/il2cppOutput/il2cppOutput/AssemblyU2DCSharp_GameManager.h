#pragma once
#include <stdint.h>
// UnityEngine.Camera
struct Camera_t7;
// UnityEngine.Transform
struct Transform_t8;
// TouchRecogniser
struct TouchRecogniser_t9;
// UnityEngine.GameObject
struct GameObject_t10;
// UnityEngine.UI.Text
struct Text_t11;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// GameManager
struct  GameManager_t1  : public MonoBehaviour_t3
{
	// UnityEngine.Camera GameManager::closeUpCamera
	Camera_t7 * ___closeUpCamera_2;
	// UnityEngine.Camera GameManager::mainCamera
	Camera_t7 * ___mainCamera_3;
	// UnityEngine.Transform GameManager::goals
	Transform_t8 * ___goals_4;
	// TouchRecogniser GameManager::touchRecogniser
	TouchRecogniser_t9 * ___touchRecogniser_5;
	// UnityEngine.GameObject GameManager::footballObject
	GameObject_t10 * ___footballObject_6;
	// UnityEngine.UI.Text GameManager::scoreText
	Text_t11 * ___scoreText_7;
	// UnityEngine.GameObject GameManager::football
	GameObject_t10 * ___football_8;
	// System.Boolean GameManager::hitCrossbar
	bool ___hitCrossbar_9;
	// System.Single GameManager::crossbarWaitTime
	float ___crossbarWaitTime_10;
	// System.Int32 GameManager::score
	int32_t ___score_11;
};
