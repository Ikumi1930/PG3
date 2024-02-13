#pragma once
#include "Creature.h"
#include <stdio.h>

class OstrichEgg : public Creature {
public:
	OstrichEgg();
	~OstrichEgg();

	void Size() override;

private:
};