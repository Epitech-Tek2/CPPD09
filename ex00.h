/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD09-clement.muth
** File description:
** ex00
*/

#ifndef EX00_H_
#define EX00_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

typedef struct cthulhu_s
{
    int m_power;
    char *m_name;
} cthulhu_t;

typedef struct koala_s
{
    cthulhu_t m_parent;
    char m_isALegend;
} koala_t;

cthulhu_t *new_cthulhu();
koala_t *new_koala(char *name, char is_a_legend);
void attack(cthulhu_t *this);
void eat(koala_t *this);
void print_power(cthulhu_t *this);
void sleeping(cthulhu_t *this);

#endif /* !EX00_H_ */