#pragma once

#include "Spell.h"
#include "Unit.h"

class Wizard :public Unit
{
    static int id;
    int mp = 0;
    Spell spells[3];
public:
    Wizard();
    void attack(Unit* target) override;
    void getDamage(int dmg) override;
};




