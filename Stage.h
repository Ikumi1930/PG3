#pragma once
#include "IScene.h"
#include "Vector2.h"
#include <Novice.h>

class StageScene : public IScene {
public:
	void Initialize() override;

	void Update() override;

	void Draw() override;

private:
	// �L�[���͌��ʂ��󂯎�锠
	char keys[256] = {0};
	char preKeys[256] = {0};

	Vector2 playerPos;
	Vector2 enemyPos;

	Vector2 bulletPos;

	int bulletSize;
	int enemySize;

	float speed;

	bool isAlive;
	bool isBulletShot;
};
