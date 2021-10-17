/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD09-clement.muth
** File description:
** tests
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../Character.hpp"

static void redirect_all_stdout(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

static void characterInit() {Character c{"Thibaut", 100};}
Test(test_character_init, test_ex_character, .init=redirect_all_stdout)
{
    characterInit();
    cr_assert_stdout_eq_str("Thibaut Created\n");
}

static void characterCloseAttack() {Character c{"Thibaut", 100};c.CloseAttack();}
Test(test_character_close_attack, test_ex_character, .init=redirect_all_stdout)
{
    characterCloseAttack();
    cr_assert_stdout_eq_str("Thibaut Created\nThibaut strikes with a wooden stick\n");
}

Test(test_character_agility, test_ex_character)
{
    Character c{"Thibaut", 100};

    cr_assert_eq(c.getAgility(), 5);
}

Test(test_character_class, test_ex_character)
{
    Character c{"Thibaut", 100};

    cr_assert_str_eq(c.getClass().data(), "Character");
}

Test(test_character_intelligence, test_ex_character)
{
    Character c{"Thibaut", 100};

    cr_assert_eq(c.getIntelligence(), 5);
}

Test(test_character_lvl_default, test_ex_character)
{
    Character c{"Thibaut", 100};

    cr_assert_eq(c.getLvl(), 100);
}

Test(test_character_name, test_ex_character)
{
    Character c{"Thibaut", 100};

    cr_assert_str_eq(c.getName().data(), "Thibaut");
}

Test(test_character_power, test_ex_character)
{
    Character c{"Thibaut", 100};

    cr_assert_eq(c.getPower(), 100);
}

Test(test_character_pv, test_ex_character)
{
    Character c{"Thibaut", 100};

    cr_assert_eq(c.getPv(), 100);
}

Test(test_character_spirit, test_ex_character)
{
    Character c{"Thibaut", 100};

    cr_assert_eq(c.getSpirit(), 5);
}

Test(test_character_stamina, test_ex_character)
{
    Character c{"Thibaut", 100};

    cr_assert_eq(c.getStamina(), 5);
}

Test(test_character_strength, test_ex_character)
{
    Character c{"Thibaut", 100};

    cr_assert_eq(c.getStrength(), 5);
}

static void characterHeal() {Character c{"Thibaut", 100};c.Heal();}
Test(test_character_heal, test_ex_character, .init=redirect_all_stdout)
{
    characterHeal();
    cr_assert_stdout_eq_str("Thibaut Created\nThibaut takes a potion\n");
}

Test(test_character_range, test_ex_character)
{
    Character c{"Thibaut", 100};

    cr_assert_eq(c.Range, Character::CLOSE);
}

static void characterRangeAttack() {Character c{"Thibaut", 100};c.RangeAttack();}
Test(test_character_range_attack, test_ex_character, .init=redirect_all_stdout)
{
    characterRangeAttack();
    cr_assert_stdout_eq_str("Thibaut Created\nThibaut tosses a stone\n");
}

static void characterRestorePm() {Character c{"Thibaut", 100};c.RestorePower();}
Test(test_character_restore_pm, test_ex_character, .init=redirect_all_stdout)
{
    characterRestorePm();
    cr_assert_stdout_eq_str("Thibaut Created\nThibaut eats\n");
}

static void characterTakeDamage() {Character c{"Thibaut", 100};c.TakeDamage(5);}
Test(test_character_take_damage, test_ex_character, .init=redirect_all_stdout)
{
    characterTakeDamage();
    cr_assert_stdout_eq_str("Thibaut Created\nThibaut takes 5 damage\n");
}