/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD09-clement.muth
** File description:
** Paladin
*/

#include "Paladin.hpp"

Paladin::Paladin(std::string const& name, int lvl) :
    Character(name, lvl), Warrior(name, lvl), Mage(name, lvl), Priest(name, lvl)
{
    _agility = 2;
    _intelligence = 10;
    _lvl = lvl;
    _name = name;
    _pm = 100;
    _pv = 100;
    _race = "Human";
    _spirit = 10;
    _stamina = 10;
    _strength = 9;
    _weaponName = "hammer";
    Class = "Paladin";
    Range = CLOSE;
    cOut("the light falls on " << getName());
}

int Paladin::CloseAttack() noexcept
{
    return Warrior::CloseAttack();
}

void Paladin::RestorePower() noexcept
{
    return Character::RestorePower();
}

int Paladin::RangeAttack() noexcept
{
    return Priest::RangeAttack();
}

void Paladin::Heal() noexcept
{
    Priest::Heal();
}

int Paladin::Intercept() noexcept
{
    return Warrior::RangeAttack();
}