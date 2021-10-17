/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD09-clement.muth
** File description:
** Priest
*/

#ifndef PRIEST_HPP_
#define PRIEST_HPP_

#include <iostream>
#include <string>
#include <fstream>
#include "Mage.hpp"

class Priest : virtual public Mage {
    public:
        Priest(std::string name, int lvl);
        ~Priest() = default;

        int CloseAttack() noexcept;
        void Heal() noexcept;
};

#endif /* !PRIEST_HPP_ */