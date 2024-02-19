#include "Enemy.h"
#include <stdio.h>

int main() {
	Enemy* enemy_ = new Enemy();

	while (enemy_->GetPhase()){
		enemy_->Update();
	}
	return 0;
}