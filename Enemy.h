#pragma once
#include <stdio.h>

class Enemy {
public:
	void Approach();
	void Shot();
	void Leave();

	void Update();

	bool GetPhase() { return phase; }

private:
	enum class Phase {
		Approach,
		Shot,
		Leave,
	};

	static void (Enemy::*spFuncTable[])();
	Phase phase_ = Phase::Approach;
	bool phase = true;
};