#pragma once

#include <string>
#include <iostream>
using namespace std;
class Unit
{
    string name;
protected:
    int hp = 0;
public:
    Unit(const string& _name, int _hp);
    virtual ~Unit();
    const string& getName()const;
    void setName(const string& _name);
    int getHp()const;
    bool isAlive()const;
    virtual void attack(Unit* target) = 0;
    virtual void getDamage(int dmg) = 0;
};




