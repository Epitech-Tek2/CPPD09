/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD09-clement.muth
** File description:
** Hunter
*/

#ifndef HUNTER_HPP_
#define HUNTER_HPP_

#include <iostream>
#include <string>
#include <fstream>
#include "Warrior.hpp"

class Hunter : virtual public Warrior {
    public:
        Hunter(std::string name, int lvl);
        ~Hunter() = default;

        int RangeAttack() noexcept;
        void RestorePower() noexcept;
};

#endif /* !HUNTER_HPP_ */