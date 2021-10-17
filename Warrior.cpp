/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD09-clement.muth
** File description:
** Warrior
*/

#include "Warrior.hpp"

Warrior::Warrior(std::string name, int lvl, bool speak) :
    Character(name, lvl)
{
    _agility = 7;
    _intelligence = 6;
    _lvl = lvl;
    _name = name;
    _pm = 100;
    _pv = 100;
    _race = "Dwarf";
    _spirit = 5;
    _stamina = 12;
    _strength = 12;
    _weaponName = "hammer";
    Class = "Warrior";
    Range = CLOSE;
    if (speak)
        cOut("I'm " << getName() << " KKKKKKKKKKRRRRRRRRRRRRRREEEEEEEEOOOOOOORRRRGGGGGGG");
}

int Warrior::CloseAttack() noexcept
{
    if (Range == RANGE || _pv < 10)
        return 0;
    if (_pm < 30) {
        OUT_OF_POWER;
        return (0);
    }
    _pm -= 30;
    _pm = XOR_ASSIGN;
    cOut(getName() << " strikes with his " << _weaponName);
    return (20 + _strength);
}

int Warrior::RangeAttack() noexcept
{
    if (Range == CLOSE || _pv < 10)
        return 0;
    if (_pm < 10) {
        OUT_OF_POWER;
        return 0;
    }
    _pm -= 10;
    _pm = XOR_ASSIGN;
    Range = CLOSE;
    cOut(getName() << " intercepts");
    return 0;
}