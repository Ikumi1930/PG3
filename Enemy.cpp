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

//接近フェーズ
void Enemy::Approach() { 
	printf("近接\n");
	Sleep(2 * 1000);
	phase_ = Phase::Shot;
}

void Enemy::Shot() {
	printf("射撃\n");
	Sleep(2 * 1000);
	phase_ = Phase::Leave;
}

//離脱フェーズ
void Enemy::Leave() {
	printf("離脱\n");
	phase = false;
}
