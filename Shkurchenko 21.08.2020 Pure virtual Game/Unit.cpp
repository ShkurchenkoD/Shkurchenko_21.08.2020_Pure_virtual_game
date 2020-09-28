#include "Unit.h"

Unit::Unit(const string& _name, int _hp)
{
    name = _name;
    hp = _hp;
}

Unit::~Unit() = default;

const string& Unit::getName() const
{
    return name;
}

void Unit::setName(const string & _name)
{
    name = _name;
}

int Unit::getHp() const
{
    return hp;
}

bool Unit::isAlive() const
{
    return hp > 0;
}
