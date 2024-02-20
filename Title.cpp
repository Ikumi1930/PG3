#include "Title.h"

void TitleScene::Initialize() {}

void TitleScene::Update() {
	// ÉLÅ[ì¸óÕÇéÛÇØéÊÇÈ
	memcpy(preKeys, keys, 256);
	Novice::GetHitKeyStateAll(keys);

	if (preKeys[DIK_SPACE] == 0 && keys[DIK_SPACE]) {
		sceneNo = STAGE;
	}
}

void TitleScene::Draw() {
	Novice::ScreenPrintf(0, 0, "SCENE : TITLE");
	Novice::ScreenPrintf(0, 20, "Press[SPACE]");
}