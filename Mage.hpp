/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD09-clement.muth
** File description:
** Mage
*/

#ifndef MAGE_HPP_
#define MAGE_HPP_

#include <iostream>
#include <string>
#include <fstream>
#include "Character.hpp"

class Mage : virtual public Character {
    public:
        Mage(std::string name, int lvl);
        ~Mage() = default;

        int CloseAttack() noexcept;
        int RangeAttack() noexcept;
        void RestorePower() noexcept;
};

#endif /* !MAGE_HPP_ */