/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD09-clement.muth
** File description:
** tests
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../Paladin.hpp"

#define PALADIN_CREATE "Thibaut Created\nI'm Thibaut KKKKKKKKKKRRRRRRRRRRRRRREEEEEEEEOOOOOOORRRRGGGGGGG\nThibaut teleported\nThibaut enters in the order\nthe light falls on Thibaut\n"

static void redirect_all_stdout(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

static void paladinInit() {Paladin p{"Thibaut", 100};}
Test(test_paladin_init, test_ex_paladin, .init=redirect_all_stdout)
{
    paladinInit();
    cr_assert_stdout_eq_str(PALADIN_CREATE);
}

static void paladinCloseAttack() {Paladin p{"Thibaut", 100};p.CloseAttack();}
Test(test_paladin_close_attack, test_ex_paladin, .init=redirect_all_stdout)
{
    paladinCloseAttack();
    cr_assert_stdout_eq_str(PALADIN_CREATE \
                            "Thibaut strikes with his hammer\n");
}

Test(test_paladin_agility, test_ex_paladin)
{
    Paladin p{"Thibaut", 100};

    cr_assert_eq(p.getAgility(), 2);
}

Test(test_paladin_class, test_ex_paladin)
{
    Paladin p{"Thibaut", 100};

    cr_assert_str_eq(p.getClass().data(), "Paladin");
}

Test(test_paladin_intelligence, test_ex_paladin)
{
    Paladin p{"Thibaut", 100};

    cr_assert_eq(p.getIntelligence(), 10);
}

Test(test_paladin_lvl_default, test_ex_paladin)
{
    Paladin p{"Thibaut", 84};

    cr_assert_eq(p.getLvl(), 84);
}

Test(test_paladin_name, test_ex_paladin)
{
    Paladin p{"Thibaut", 100};

    cr_assert_str_eq(p.getName().data(), "Thibaut");
}

Test(test_paladin_power, test_ex_paladin)
{
    Paladin p{"Thibaut", 100};

    cr_assert_eq(p.getPower(), 100);
}

Test(test_paladin_pv, test_ex_paladin)
{
    Paladin p{"Thibaut", 100};

    cr_assert_eq(p.getPv(), 100);
}

Test(test_paladin_spirit, test_ex_paladin)
{
    Paladin p{"Thibaut", 100};

    cr_assert_eq(p.getSpirit(), 10);
}

Test(test_paladin_stamina, test_ex_paladin)
{
    Paladin p{"Thibaut", 100};

    cr_assert_eq(p.getStamina(), 10);
}

Test(test_paladin_strength, test_ex_paladin)
{
    Paladin p{"Thibaut", 100};

    cr_assert_eq(p.getStrength(), 9);
}

static void priestHeal() {Paladin p{"Thibaut", 100};p.Heal();}
Test(test_paladin_heal, test_ex_paladin, .init=redirect_all_stdout)
{
    priestHeal();
    cr_assert_stdout_eq_str(PALADIN_CREATE \
                            "Thibaut casts a little heal spell\n");
}

Test(test_paladin_range, test_ex_paladin)
{
    Paladin p{"Thibaut", 100};

    cr_assert_eq(p.Range, Priest::CLOSE);
}

static void priestRangeAttack() {Paladin p{"Thibaut", 100};p.RangeAttack();}
Test(test_paladin_range_attack, test_ex_paladin, .init=redirect_all_stdout)
{
    priestRangeAttack();
    cr_assert_stdout_eq_str(PALADIN_CREATE \
                            "Thibaut launches a fire ball\n");
}

static void priestRestorePm() {Paladin p{"Thibaut", 100};p.RestorePower();}
Test(test_paladin_restore_pm, test_ex_paladin, .init=redirect_all_stdout)
{
    priestRestorePm();
    cr_assert_stdout_eq_str(PALADIN_CREATE \
                            "Thibaut eats\n");
}

static void priestTakedamage() {Paladin p{"Thibaut", 100};p.TakeDamage(5);}
Test(test_paladin_take_damage, test_ex_paladin, .init=redirect_all_stdout)
{
    priestTakedamage();
    cr_assert_stdout_eq_str(PALADIN_CREATE
                            "Thibaut takes 5 damage\n");
}