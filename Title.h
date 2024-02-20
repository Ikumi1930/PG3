#pragma once
#include "IScene.h"
#include <Novice.h>

class TitleScene : public IScene {
public:
	void Initialize() override;

	void Update() override;

	void Draw() override;

private:
	// �L�[���͌��ʂ��󂯎�锠
	char keys[256] = {0};
	char preKeys[256] = {0};
};
