/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD09-clement.muth
** File description:
** Character
*/

#ifndef CHARACTER_HPP_
#define CHARACTER_HPP_

#include <iostream>
#include <string>
#include <fstream>

#define cOut(message) std::cout << message << std::endl
#define OUT_OF_POWER cOut(this->getName() << " out of power")
#define OUT_OF_COMBAT cOut(this->getName() << " out of combat")
#define STRIKES cOut(this->getName() << " strikes with a wooden stick")
#define XOR_ASSIGN ((0 >= _pm) ? (_pm ^ _pm) : (_pm))

class Character {
    public:
        Character(std::string name, int lvl);
        ~Character() = default;

        enum AttackRange
        {
            CLOSE,
            RANGE
        };

        AttackRange Range;

        int getAgility() const noexcept;
        int getStamina() const noexcept;
        int getStrength() const noexcept;
        int getIntelligence() const noexcept;
        int getLvl() const noexcept;
        int getPower() const noexcept;
        int getPv() const noexcept;
        int getSpirit() const noexcept;
        std::string const& getClass() const noexcept;
        std::string const& getName() const noexcept;

        int CloseAttack() noexcept;
        int RangeAttack() noexcept;
        void Heal() noexcept;
        void RestorePower() noexcept;
        void TakeDamage(int damage) noexcept;


    protected:
        std::string _name;
        std::string _race;
        std::string Class;

        int _lvl;
        int _pv;
        int _pm;
        int _strength;
        int _intelligence;
        int _spirit;
        int _agility;
        int _stamina;
};

#endif /* !CHARACTER_HPP_ */