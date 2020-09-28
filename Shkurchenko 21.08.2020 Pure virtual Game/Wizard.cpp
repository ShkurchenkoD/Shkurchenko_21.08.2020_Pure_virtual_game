#include "Wizard.h"

int Wizard::id = 1;

Wizard::Wizard(): Unit("Wizard_" + to_string(id++), 100)
{
	mp = 75;
	spells[0].title = "Lightning strike.";
	spells[0].mp = 50;
	spells[0].minDmg = 10;
	spells[0].maxDmg = 30;

	spells[1].title = "Fire strike.";
	spells[1].mp = 30;
	spells[1].minDmg = 5;
	spells[1].maxDmg = 25;

	spells[2].title = "Water blow.";
	spells[2].mp = 20;
	spells[2].minDmg = 3;
	spells[2].maxDmg = 15;
}

void Wizard::attack(Unit* target) 
{
	int tmp = rand() % size(spells);
	int dmg = rand() % (spells[tmp].maxDmg - spells[tmp].minDmg) + spells[tmp].minDmg;
	mp -= spells[tmp].mp;
    cout << "Wizard " << getName() << " is attacking " << target->getName() << ". Damage is " << dmg << endl;
    target->getDamage(dmg);
}

void Wizard::getDamage(int dmg)
{
	hp -= dmg;
	if (hp < 0)
		hp = 0;
}
