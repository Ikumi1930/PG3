#include "Enemy.h"

void Enemy::Update() {
	switch (phase_) {
	case 1:
		state = static_cast<size_t>(EnemyState::Approach);
		(this->*spFuncTable[state])();
		break;
	case 2:
		state = static_cast<size_t>(EnemyState::Shot);
		(this->*spFuncTable[state])();
		break;
	case 3:
		state = static_cast<size_t>(EnemyState::Leave);
		(this->*spFuncTable[state])();
		break;
	}
}

void Enemy::Approach() {
	printf("Ú‹ß\n");
	std::this_thread::sleep_for(std::chrono::seconds(2));
}

void Enemy::Shot() {
	printf("ËŒ‚\n");
	std::this_thread::sleep_for(std::chrono::seconds(2));
}

void Enemy::Leave() {
	printf("—£’E\n");
	std::this_thread::sleep_for(std::chrono::seconds(2));
}

void (Enemy::*Enemy::spFuncTable[])() = {&Enemy::Approach, &Enemy::Shot, &Enemy::Leave};