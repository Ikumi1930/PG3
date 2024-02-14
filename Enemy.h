#pragma once
#include <chrono>
#include <stdio.h>
#include <thread>

enum class EnemyState { Approach, Shot, Leave };

class Enemy {
public:
	void Update();

	void Approach();

	void Leave();

	void Shot();

private:
	static void (Enemy::*spFuncTable[])();
	size_t state;
	int phase_;
};