#include "Warrior.h"

int Warrior::id = 1;

Warrior::Warrior() : Unit("Warrior_" + to_string(id++), 100)
{
    armor = 50;
    minDmg = 0;
    maxDmg = 20;
}

void Warrior::attack(Unit* target) 
{
    int dmg = rand() % (maxDmg - minDmg) + minDmg;
    cout << "Warrior " << getName() << " is attacking "
        << target->getName() << ". Damage is " << dmg << endl;
    target->getDamage(dmg);
}

void Warrior::getDamage(int dmg)
{
    int tmp = armor - dmg;
    if (tmp >= 0)
    {
        armor -= dmg;
        return;
    }
    armor = 0;
    hp += tmp;
    if (hp < 0)
        hp = 0;
}
