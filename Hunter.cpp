/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD09-clement.muth
** File description:
** Hunter
*/

#include "Hunter.hpp"

Hunter::Hunter(std::string name, int lvl) :
    Character(name, lvl), Warrior(name, lvl, false)
{
    _agility = 25;
    _intelligence = 5;
    _lvl = lvl;
    _name = name;
    _pm = 100;
    _pv = 100;
    _race = "Elf";
    _spirit = 6;
    _stamina = 9;
    _strength = 9;
    _weaponName = "sword";
    Class = "Hunter";
    Range = CLOSE;
    cOut(getName() << " is born from a tree");
}

void Hunter::RestorePower() noexcept
{
    this->_pm = 100;
    cOut(this->getName() << " meditates");
}

int Hunter::RangeAttack() noexcept
{
    if (this->_pm < 10) {
        OUT_OF_POWER;
        return 0;
    }
    this->_pm -= 25;
    this->_pm = XOR_ASSIGN;
    cOut(getName() << " uses his bow");
    return (this->_strength + 15);
}