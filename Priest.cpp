/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD09-clement.muth
** File description:
** Priest
*/

#include "Priest.hpp"

Priest::Priest(std::string name, int lvl) :
    Character(name, lvl), Mage(name, lvl)
{
    Range = CLOSE;
    _name = name;
    Class = "Priest";
    _race = "Orc";
    _lvl = lvl;
    _pm = 100;
    _pv = 100;
    _strength = 4;
    _stamina = 4;
    _intelligence = 42;
    _spirit = 21;
    _agility = 2;
    cOut(getName() << " enters in the order");
}

int Priest::CloseAttack() noexcept
{
    if (Range == RANGE || _pv < 10)
        return 0;
    if (_pm < 10) {
        OUT_OF_POWER;
        return 0;
    }
    _pm -= 10;
    _pm = XOR_ASSIGN;
    Range = RANGE;
    cOut(getName() << " uses a spirit explosion");
    return (10 + _spirit);
}

void Priest::Heal() noexcept
{
    _pm -= 10;
    if (_pm < 10) {
        OUT_OF_POWER;
        return;
    }
    _pm = XOR_ASSIGN;
    _pv += 70;
    _pv = (_pv > 100) ? 100 : _pv;
    cOut(getName() << " casts a little heal spell");
}