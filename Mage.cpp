/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD09-clement.muth
** File description:
** Mage
*/

#include "Mage.hpp"

Mage::Mage(std::string name, int lvl) : Character(name, lvl)
{
    _agility = 7;
    _intelligence = 12;
    _lvl = lvl;
    _name = name;
    _pm = 100;
    _pv = 100;
    _race = "Gnome";
    _spirit = 11;
    _stamina = 6;
    _strength = 6;
    Class = "Mage";
    Range = CLOSE;
    cOut(getName() << " teleported");
}

int Mage::CloseAttack() noexcept
{
    if (Range == RANGE || _pv < 10)
        return 0;
    if (_pm < 10) {
        OUT_OF_POWER;
        return 0;
    }
    _pm -= 10;
    Range = RANGE;
    _pm = XOR_ASSIGN;
    cOut(getName() << " blinks");
    return 0;
}

int Mage::RangeAttack() noexcept
{
    if (_pm < 25) {
        _pm ^= _pm;
        OUT_OF_POWER;
        return 0;
    }
    _pm -= 25;
    _pm = XOR_ASSIGN;
    cOut(getName() << " launches a fire ball");
    return (20 + _spirit);
}

void Mage::RestorePower() noexcept
{
    _pm = ((_pm + 50 + _intelligence) > 100) ? 100 : (_pm + 50 + _intelligence);
    cOut(getName() << " takes a mana potion");
}