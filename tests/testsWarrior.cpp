/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD09-clement.muth
** File description:
** tests
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../Warrior.hpp"

#define WARRIOR_CREATE "Thibaut Created\nI'm Thibaut KKKKKKKKKKRRRRRRRRRRRRRREEEEEEEEOOOOOOORRRRGGGGGGG\n"

static void redirect_all_stdout(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

static void characterInit() {Warrior w{"Thibaut", 100};}
Test(test_warrior_init, test_ex_warrior, .init=redirect_all_stdout)
{
    characterInit();
    cr_assert_stdout_eq_str("Thibaut Created\nI'm Thibaut KKKKKKKKKKRRRRRRRRRRRRRREEEEEEEEOOOOOOORRRRGGGGGGG\n");
}

static void characterCloseAttack() {Warrior w{"Thibaut", 100};w.CloseAttack();}
Test(test_warrior_close_attack, test_ex_warrior, .init=redirect_all_stdout)
{
    characterCloseAttack();
    cr_assert_stdout_eq_str(WARRIOR_CREATE \
                            "Thibaut strikes with his hammer\n");
}

Test(test_warrior_agility, test_ex_warrior)
{
    Warrior w{"Thibaut", 100};

    cr_assert_eq(w.getAgility(), 7);
}

Test(test_warrior_class, test_ex_warrior)
{
    Warrior w{"Thibaut", 100};

    cr_assert_str_eq(w.getClass().data(), "Warrior");
}

Test(test_warrior_intelligence, test_ex_warrior)
{
    Warrior w{"Thibaut", 100};

    cr_assert_eq(w.getIntelligence(), 6);
}

Test(test_warrior_lvl_default, test_ex_warrior)
{
    Warrior w{"Thibaut", 100};

    cr_assert_eq(w.getLvl(), 100);
}

Test(test_warrior_name, test_ex_warrior)
{
    Warrior w{"Thibaut", 100};

    cr_assert_str_eq(w.getName().data(), "Thibaut");
}

Test(test_warrior_power, test_ex_warrior)
{
    Warrior w{"Thibaut", 100};

    cr_assert_eq(w.getPower(), 100);
}

Test(test_warrior_pv, test_ex_warrior)
{
    Warrior w{"Thibaut", 100};

    cr_assert_eq(w.getPv(), 100);
}

Test(test_warrior_spirit, test_ex_warrior)
{
    Warrior w{"Thibaut", 100};

    cr_assert_eq(w.getSpirit(), 5);
}

Test(test_warrior_stamina, test_ex_warrior)
{
    Warrior w{"Thibaut", 100};

    cr_assert_eq(w.getStamina(), 12);
}

Test(test_warrior_strength, test_ex_warrior)
{
    Warrior w{"Thibaut", 100};

    cr_assert_eq(w.getStrength(), 12);
}

static void characterHeal() {Warrior w{"Thibaut", 100};w.Heal();}
Test(test_warrior_heal, test_ex_warrior, .init=redirect_all_stdout)
{
    characterHeal();
    cr_assert_stdout_eq_str(WARRIOR_CREATE \
                            "Thibaut takes a potion\n");
}

Test(test_warrior_range, test_ex_warrior)
{
    Warrior w{"Thibaut", 100};

    cr_assert_eq(w.Range, Character::CLOSE);
}

static void characterRangeAttack() {Warrior w{"Thibaut", 100};w.RangeAttack();}
Test(test_warrior_range_attack, test_ex_warrior, .init=redirect_all_stdout)
{
    characterRangeAttack();
    cr_assert_stdout_eq_str(WARRIOR_CREATE \
                            "Thibaut intercepts\n");
}

static void characterRestorePm() {Warrior w{"Thibaut", 100};w.RestorePower();}
Test(test_warrior_restore_pm, test_ex_warrior, .init=redirect_all_stdout)
{
    characterRestorePm();
    cr_assert_stdout_eq_str(WARRIOR_CREATE \
                            "Thibaut eats\n");
}

static void characterTakeDamage() {Warrior w{"Thibaut", 100};w.TakeDamage(5);}
Test(test_warrior_take_damage, test_ex_warrior, .init=redirect_all_stdout)
{
    characterTakeDamage();
    cr_assert_stdout_eq_str(WARRIOR_CREATE
                            "Thibaut takes 5 damage\n");
}