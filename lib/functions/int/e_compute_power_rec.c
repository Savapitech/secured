/*
** EPITECH PROJECT, 2024
** compute power rec
** File description:
** power recursif
*/

#include "eyes.h"

int e_compute_power_rec(int nb, int p)
{
    if (p == 0)
        return 1;
    if (nb > 2147483647)
        return 0;
    if (p != 0)
        nb *= e_compute_power_rec(nb, p - 1);
    return nb;
}
