/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD09-clement.muth
** File description:
** Paladin
*/

#ifndef PALADIN_HPP_
#define PALADIN_HPP_

#include <iostream>
#include <string>
#include <fstream>
#include "Warrior.hpp"
#include "Priest.hpp"

class Paladin : public virtual Warrior, public virtual Priest {
    public:
        Paladin(std::string const& name, int lvl);
        ~Paladin() = default;

        int RangeAttack() noexcept;
        int CloseAttack() noexcept;
        void RestorePower() noexcept;
        void Heal() noexcept;
        int Intercept() noexcept;
    private:
        std::string _weaponName;
};

#endif /* !PALADIN_HPP_ */