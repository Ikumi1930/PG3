#include "Egg.h"
#include "Creature.h"
#include "OstrichEgg.h"

int main() {
	Creature* Charactor[2];
	Charactor[0] = new Egg();
	Charactor[1] = new OstrichEgg();

	Charactor[0]->Size();
	Charactor[1]->Size();

	return 0;
}