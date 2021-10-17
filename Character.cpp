/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD09-clement.muth
** File description:
** Character
*/

#include "Character.hpp"

Character::Character(std::string name, int lvl) : Range(CLOSE),
    _name(name), _race("Koala"), Class("Character"), _lvl(lvl),
    _pv(100), _pm(100), _strength(5), _intelligence(5),
    _spirit(5), _agility(5), _stamina(5)
{
    cOut(getName() << " Created");
}

std::string const& Character::getClass() const noexcept
{
    return Class;
}

int Character::getAgility() const noexcept
{
    return (_agility);
}

int Character::getStamina() const noexcept
{
    return (_stamina);
}

int Character::getStrength() const noexcept
{
    return (_strength);
}

int Character::getIntelligence() const noexcept
{
    return (_intelligence);
}

int Character::getLvl() const noexcept
{
    return (_lvl);
}

int Character::getPower() const noexcept
{
    return (_pm);
}

int Character::getPv() const noexcept
{
    return (_pv);
}

int Character::getSpirit() const noexcept
{
    return (_spirit);
}

std::string const& Character::getName() const noexcept
{
    return (_name);
}

int Character::CloseAttack() noexcept
{
    if (Range == RANGE || _pv < 10)
        return 0;
    if (this->_pm < 10) {
        OUT_OF_POWER;
        return 0;
    }
    this->_pm -= 10;
    this->_pm = (this->_pm >= 0) ? this->_pm : 0;
    STRIKES;
    return (this->_strength + 10);
}

int Character::RangeAttack() noexcept
{
    if (this->_pm < 10) {
        OUT_OF_POWER;
        return 0;
    }
    this->_pm -= 10;
    this->_pm = (this->_pm >= 0) ? this->_pm : 0;
    cOut(getName() << " tosses a stone");
    return (this->_strength + 5);
}

void Character::Heal() noexcept
{
    this->_pv += 50;
    this->_pv = (100 <= this->_pv) ? 100 : this->_pv;
    cOut(this->getName() << " takes a potion");
}

void Character::RestorePower() noexcept
{
    this->_pm = 100;
    cOut(this->getName() << " eats");
}

void Character::TakeDamage(int damage) noexcept
{
    this->_pv -= damage;
    this->_pv = ((0 >= this->_pv) ? (this->_pv ^ this->_pv) : (this->_pv));
    if (this->_pv <= 0) OUT_OF_COMBAT;
    else cOut(this->getName() << " takes " << damage << " damage");
}