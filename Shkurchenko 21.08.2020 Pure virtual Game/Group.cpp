
#include "Group.h"

Group::Group(const string& _title)
{
    title = _title;
    for (int i = 0; i < size(group); ++i)
    {
        if (rand() % 2 == 0)
        {
            group[i] = new Wizard();
        }
        else
        {
            group[i] = new Warrior();
        }
    }
}

Group::Group(const Group& obj)
{
    for (int i = 0; i < size(group); i++)
    {
        if (group[i] == dynamic_cast<Warrior*>(*group))
        {
            group[i] = new Warrior();
            title = obj.title;
            group[i]->setName(obj.group[i]->getName());
        }
        else if (group[i] == dynamic_cast<Wizard*>(*group))
        {
            group[i] = new Wizard();
            title = obj.title;
            group[i]->setName(obj.group[i]->getName());
        }
    }
}

Group::Group(Group&& obj)noexcept
{
    for (int i = 0; i < size(group); i++)
    {
        if (group[i] == dynamic_cast<Warrior*>(*group))
        {
            title = obj.title;
            group[i] = obj.group[i];
            obj.group[i] = nullptr;
        }
        else if (group[i] == dynamic_cast<Wizard*>(*group))
        {
            title = obj.title;
            group[i] = obj.group[i];
            obj.group[i] = nullptr;
        }
    }

}

Group& Group::operator=(const Group& obj)
{
    if (this == &obj)
        return *this;
    for (int i = 0; i < size(group); i++)
    {
        if (group[i] == dynamic_cast<Warrior*>(*group))
        {
            group[i] = new Warrior();
            title = obj.title;
            group[i]->setName(obj.group[i]->getName());
        }
        else if (group[i] == dynamic_cast<Wizard*>(*group))
        {
            group[i] = new Wizard();
            title = obj.title;
            group[i]->setName(obj.group[i]->getName());
        }
    }
    return *this;
}

Group& Group::operator=(Group&& obj) noexcept
{
    if (this == &obj)
        return *this;
    for (int i = 0; i < size(group); i++)
    {
        if (group[i] == dynamic_cast<Warrior*>(*group))
        {
            title = obj.title;
            group[i] = obj.group[i];
            obj.group[i] = nullptr;
        }
        else if (group[i] == dynamic_cast<Wizard*>(*group))
        {
            title = obj.title;
            group[i] = obj.group[i];
            obj.group[i] = nullptr;
        }
    }
    return *this;
}

int Group::getSize() const
{
    return size(group);
}

Unit* Group::operator[](int pos)
{
    return group[pos];
}

Group::~Group()
{
    for (auto pt : group)
        delete pt;
}
