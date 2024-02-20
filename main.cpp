#include "GameManager.h"
#include <Novice.h>

const char kWindowTitle[] = "PG3";

// Windows�A�v���ł̃G���g���[�|�C���g(main�֐�)
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {

	// ���C�u�����̏�����
	Novice::Initialize(kWindowTitle, 1280, 720);

	GameManager* gameManager = new GameManager();

	gameManager->Run();

	return 0;
}