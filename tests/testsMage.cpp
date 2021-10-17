/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD09-clement.muth
** File description:
** tests
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../Mage.hpp"

#define MAGE_CREATE "Thibaut Created\nThibaut teleported\n"

static void redirect_all_stdout(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

static void mageInit() {Mage m{"Thibaut", 100};}
Test(test_mage_init, test_ex_mage, .init=redirect_all_stdout)
{
    mageInit();
    cr_assert_stdout_eq_str(MAGE_CREATE);
}

static void mageCloseAttack() {Mage m{"Thibaut", 100};m.CloseAttack();}
Test(test_mage_close_attack, test_ex_mage, .init=redirect_all_stdout)
{
    mageCloseAttack();
    cr_assert_stdout_eq_str(MAGE_CREATE \
                            "Thibaut blinks\n");
}

Test(test_mage_agility, test_ex_mage)
{
    Mage m{"Thibaut", 100};

    cr_assert_eq(m.getAgility(), 7);
}

Test(test_mage_class, test_ex_mage)
{
    Mage m{"Thibaut", 100};

    cr_assert_str_eq(m.getClass().data(), "Mage");
}

Test(test_mage_intelligence, test_ex_mage)
{
    Mage m{"Thibaut", 100};

    cr_assert_eq(m.getIntelligence(), 12);
}

Test(test_mage_lvl_default, test_ex_mage)
{
    Mage m{"Thibaut", 40};

    cr_assert_eq(m.getLvl(), 40);
}

Test(test_mage_name, test_ex_mage)
{
    Mage m{"Thibaut", 100};

    cr_assert_str_eq(m.getName().data(), "Thibaut");
}

Test(test_mage_power, test_ex_mage)
{
    Mage m{"Thibaut", 100};

    cr_assert_eq(m.getPower(), 100);
}

Test(test_mage_pv, test_ex_mage)
{
    Mage m{"Thibaut", 100};

    cr_assert_eq(m.getPv(), 100);
}

Test(test_mage_spirit, test_ex_mage)
{
    Mage m{"Thibaut", 100};

    cr_assert_eq(m.getSpirit(), 11);
}

Test(test_mage_stamina, test_ex_mage)
{
    Mage m{"Thibaut", 100};

    cr_assert_eq(m.getStamina(), 6);
}

Test(test_mage_strength, test_ex_mage)
{
    Mage m{"Thibaut", 100};

    cr_assert_eq(m.getStrength(), 6);
}

static void mageHeal() {Mage m{"Thibaut", 100};m.Heal();}
Test(test_mage_heal, test_ex_mage, .init=redirect_all_stdout)
{
    mageHeal();
    cr_assert_stdout_eq_str(MAGE_CREATE \
                            "Thibaut takes a potion\n");
}

Test(test_mage_range, test_ex_mage)
{
    Mage m{"Thibaut", 100};

    cr_assert_eq(m.Range, Mage::CLOSE);
}

static void mageRangeAttack() {Mage m{"Thibaut", 100};m.RangeAttack();}
Test(test_mage_range_attack, test_ex_mage, .init=redirect_all_stdout)
{
    mageRangeAttack();
    cr_assert_stdout_eq_str(MAGE_CREATE \
                            "Thibaut launches a fire ball\n");
}

static void mageRestorePm() {Mage m{"Thibaut", 100};m.RestorePower();}
Test(test_mage_restore_pm, test_ex_mage, .init=redirect_all_stdout)
{
    mageRestorePm();
    cr_assert_stdout_eq_str(MAGE_CREATE \
                            "Thibaut takes a mana potion\n");
}

static void mageTakeDamage() {Mage m{"Thibaut", 100};m.TakeDamage(5);}
Test(test_mage_take_damage, test_ex_mage, .init=redirect_all_stdout)
{
    mageTakeDamage();
    cr_assert_stdout_eq_str(MAGE_CREATE
                            "Thibaut takes 5 damage\n");
}