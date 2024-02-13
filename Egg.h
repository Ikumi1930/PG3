#pragma once
#include "Creature.h"
#include <stdio.h>

class Egg : public Creature {
public:
	Egg();
	~Egg();

	void Size() override;

private:
};
