#pragma once

#include "Unit.h"

class Warrior :public Unit
{
    static int id;
    int armor = 0;
    int minDmg = 0;
    int maxDmg = 0;
public:
    Warrior();
    void attack(Unit* target) override;
    void getDamage(int dmg) override;
};




