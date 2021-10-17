/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD09-clement.muth
** File description:
** tests
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../Priest.hpp"

#define PRIEST_CREATE "Thibaut Created\nThibaut teleported\nThibaut enters in the order\n"

static void redirect_all_stdout(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

static void priestInit() {Priest p{"Thibaut", 100};}
Test(test_priest_init, test_ex_priest, .init=redirect_all_stdout)
{
    priestInit();
    cr_assert_stdout_eq_str(PRIEST_CREATE);
}

static void priestCloseAttack() {Priest p{"Thibaut", 100};p.CloseAttack();}
Test(test_priest_close_attack, test_ex_priest, .init=redirect_all_stdout)
{
    priestCloseAttack();
    cr_assert_stdout_eq_str(PRIEST_CREATE \
                            "Thibaut uses a spirit explosion\n");
}

Test(test_priest_agility, test_ex_priest)
{
    Priest p{"Thibaut", 100};

    cr_assert_eq(p.getAgility(), 2);
}

Test(test_priest_class, test_ex_priest)
{
    Priest p{"Thibaut", 100};

    cr_assert_str_eq(p.getClass().data(), "Priest");
}

Test(test_priest_intelligence, test_ex_priest)
{
    Priest p{"Thibaut", 100};

    cr_assert_eq(p.getIntelligence(), 42);
}

Test(test_priest_lvl_default, test_ex_priest)
{
    Priest p{"Thibaut", 84};

    cr_assert_eq(p.getLvl(), 84);
}

Test(test_priest_name, test_ex_priest)
{
    Priest p{"Thibaut", 100};

    cr_assert_str_eq(p.getName().data(), "Thibaut");
}

Test(test_priest_power, test_ex_priest)
{
    Priest p{"Thibaut", 100};

    cr_assert_eq(p.getPower(), 100);
}

Test(test_priest_pv, test_ex_priest)
{
    Priest p{"Thibaut", 100};

    cr_assert_eq(p.getPv(), 100);
}

Test(test_priest_spirit, test_ex_priest)
{
    Priest p{"Thibaut", 100};

    cr_assert_eq(p.getSpirit(), 21);
}

Test(test_priest_stamina, test_ex_priest)
{
    Priest p{"Thibaut", 100};

    cr_assert_eq(p.getStamina(), 4);
}

Test(test_priest_strength, test_ex_priest)
{
    Priest p{"Thibaut", 100};

    cr_assert_eq(p.getStrength(), 4);
}

static void priestHeal() {Priest p{"Thibaut", 100};p.Heal();}
Test(test_priest_heal, test_ex_priest, .init=redirect_all_stdout)
{
    priestHeal();
    cr_assert_stdout_eq_str(PRIEST_CREATE \
                            "Thibaut casts a little heal spell\n");
}

Test(test_priest_range, test_ex_priest)
{
    Priest p{"Thibaut", 100};

    cr_assert_eq(p.Range, Priest::CLOSE);
}

static void priestRangeAttack() {Priest p{"Thibaut", 100};p.RangeAttack();}
Test(test_priest_range_attack, test_ex_priest, .init=redirect_all_stdout)
{
    priestRangeAttack();
    cr_assert_stdout_eq_str(PRIEST_CREATE \
                            "Thibaut launches a fire ball\n");
}

static void priestRestorePm() {Priest p{"Thibaut", 100};p.RestorePower();}
Test(test_priest_restore_pm, test_ex_priest, .init=redirect_all_stdout)
{
    priestRestorePm();
    cr_assert_stdout_eq_str(PRIEST_CREATE \
                            "Thibaut takes a mana potion\n");
}

static void priestTakedamage() {Priest p{"Thibaut", 100};p.TakeDamage(5);}
Test(test_priest_take_damage, test_ex_priest, .init=redirect_all_stdout)
{
    priestTakedamage();
    cr_assert_stdout_eq_str(PRIEST_CREATE
                            "Thibaut takes 5 damage\n");
}