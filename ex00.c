/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD09-clement.muth
** File description:
** ex00
*/

#include "ex00.h"

static void cthulhu_initializer(cthulhu_t *this)
{
    printf("----\n");
    this->m_name = malloc(8);
    strcpy(this->m_name, "Cthulhu");
    this->m_power = 42;
    printf("Building Cthulhu\n");
}

static void koala_initializer(koala_t *this, char *_name, char _is_A_Legend)
{
    cthulhu_initializer(&this->m_parent);

    this->m_parent.m_name = _name;
    this->m_parent.m_power = _is_A_Legend ? 42 : 0;
    this->m_isALegend = _is_A_Legend;
    printf("Building %s\n", this->m_parent.m_name);
}

cthulhu_t *new_cthulhu()
{
    cthulhu_t *this = malloc(sizeof(cthulhu_t));

    cthulhu_initializer(this);
    return (this);
}

koala_t *new_koala(char *name, char _is_A_Legend)
{
    koala_t *this = malloc(sizeof(koala_t));

    koala_initializer(this, name, _is_A_Legend);
    return (this);
}

void attack(cthulhu_t *this)
{
    if (this->m_power >= 42) {
        this->m_power -= 42;
        printf("%s attacks and destroys the city\n", this->m_name);
    } else printf("%s can't attack, he doesn't have enough power\n",
        this->m_name);
}

void eat(koala_t *this)
{
    this->m_parent.m_power += 42;
    printf("%s eats\n", this->m_parent.m_name);
}

void sleeping(cthulhu_t *this)
{
    this->m_power += 42000;
    printf("%s sleeps\n", this->m_name);
}

void print_power(cthulhu_t *this)
{
    printf("Power => %d\n", this->m_power);
}