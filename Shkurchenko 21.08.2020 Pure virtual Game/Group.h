#pragma once

#include "Wizard.h"
#include "Warrior.h"
class Group
{
    string title;
    Unit* group[3]{};
public:
    Group(const string& _title);
    Group(const Group& obj);
    Group(Group&& obj)noexcept;
    Group&operator=(const Group& obj);
    Group&operator=(Group&& obj)noexcept;
    ~Group();
    int getSize()const;
    Unit* operator[](int pos);
};
