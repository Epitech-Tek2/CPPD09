/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD09-clement.muth
** File description:
** Warrior
*/

#ifndef WARRIOR_HPP_
#define WARRIOR_HPP_

#include <iostream>
#include <string>
#include <fstream>
#include "Character.hpp"

#define updateCap(lv, rv, max) ({ lv += rv; lv = ((lv < 0) ? (0) : (max)); })

class Warrior : virtual public Character {
    public:
        Warrior(std::string name, int lvl, bool speak = true);
        ~Warrior() = default;

        bool actionCost(int cost) noexcept;
        int CloseAttack() noexcept;
        int RangeAttack() noexcept;

    protected:
        std::string _weaponName;
};

#endif /* !WARRIOR_HPP_ */