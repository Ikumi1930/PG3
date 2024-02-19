#include "Enemy.h"
#include <Windows.h>

void (Enemy::*Enemy::spFuncTable[])() = {
    &Enemy::Approach,
	&Enemy::Shot, 
	&Enemy::Leave

};

void Enemy::Update() {
	(this->*spFuncTable[static_cast<size_t>(phase_)])(); 
};

//�ڋ߃t�F�[�Y
void Enemy::Approach() { 
	printf("�ߐ�\n");
	Sleep(2 * 1000);
	phase_ = Phase::Shot;
}

void Enemy::Shot() {
	printf("�ˌ�\n");
	Sleep(2 * 1000);
	phase_ = Phase::Leave;
}

//���E�t�F�[�Y
void Enemy::Leave() {
	printf("���E\n");
	phase = false;
}
