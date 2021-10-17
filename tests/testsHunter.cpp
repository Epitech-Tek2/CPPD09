/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD09-clement.muth
** File description:
** tests
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../Hunter.hpp"

#define HUNTER_CREATE "Thibaut Created\nThibaut is born from a tree\n"

static void redirect_all_stdout(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

static void hunterInit() {Hunter h{"Thibaut", 100};}
Test(test_hunter_init, test_ex_hunter, .init=redirect_all_stdout)
{
    hunterInit();
    cr_assert_stdout_eq_str(HUNTER_CREATE);
}

static void hunterCloseAttack() {Hunter h{"Thibaut", 100};h.CloseAttack();}
Test(test_hunter_close_attack, test_ex_hunter, .init=redirect_all_stdout)
{
    hunterCloseAttack();
    cr_assert_stdout_eq_str(HUNTER_CREATE \
                            "Thibaut strikes with his sword\n");
}

Test(test_hunter_agility, test_ex_hunter)
{
    Hunter h{"Thibaut", 100};

    cr_assert_eq(h.getAgility(), 25);
}

Test(test_hunter_class, test_ex_hunter)
{
    Hunter h{"Thibaut", 100};

    cr_assert_str_eq(h.getClass().data(), "Hunter");
}

Test(test_hunter_intelligence, test_ex_hunter)
{
    Hunter h{"Thibaut", 100};

    cr_assert_eq(h.getIntelligence(), 5);
}

Test(test_hunter_lvl_default, test_ex_hunter)
{
    Hunter h{"Thibaut", 84};

    cr_assert_eq(h.getLvl(), 84);
}

Test(test_hunter_name, test_ex_hunter)
{
    Hunter h{"Thibaut", 100};

    cr_assert_str_eq(h.getName().data(), "Thibaut");
}

Test(test_hunter_power, test_ex_hunter)
{
    Hunter h{"Thibaut", 100};

    cr_assert_eq(h.getPower(), 100);
}

Test(test_hunter_pv, test_ex_hunter)
{
    Hunter h{"Thibaut", 100};

    cr_assert_eq(h.getPv(), 100);
}

Test(test_hunter_spirit, test_ex_hunter)
{
    Hunter h{"Thibaut", 100};

    cr_assert_eq(h.getSpirit(), 6);
}

Test(test_hunter_stamina, test_ex_hunter)
{
    Hunter h{"Thibaut", 100};

    cr_assert_eq(h.getStamina(), 9);
}

Test(test_hunter_strength, test_ex_hunter)
{
    Hunter h{"Thibaut", 100};

    cr_assert_eq(h.getStrength(), 9);
}

static void priestHeal() {Hunter h{"Thibaut", 100};h.Heal();}
Test(test_hunter_heal, test_ex_hunter, .init=redirect_all_stdout)
{
    priestHeal();
    cr_assert_stdout_eq_str(HUNTER_CREATE \
                            "Thibaut takes a potion\n");
}

static void priestRangeAttack() {Hunter h{"Thibaut", 100};h.RangeAttack();}
Test(test_hunter_range_attack, test_ex_hunter, .init=redirect_all_stdout)
{
    priestRangeAttack();
    cr_assert_stdout_eq_str(HUNTER_CREATE \
                            "Thibaut uses his bow\n");
}

static void priestRestorePm() {Hunter h{"Thibaut", 100};h.RestorePower();}
Test(test_hunter_restore_pm, test_ex_hunter, .init=redirect_all_stdout)
{
    priestRestorePm();
    cr_assert_stdout_eq_str(HUNTER_CREATE \
                            "Thibaut meditates\n");
}

static void priestTakedamage() {Hunter h{"Thibaut", 100};h.TakeDamage(5);}
Test(test_hunter_take_damage, test_ex_hunter, .init=redirect_all_stdout)
{
    priestTakedamage();
    cr_assert_stdout_eq_str(HUNTER_CREATE
                            "Thibaut takes 5 damage\n");
}