/*
** EPITECH PROJECT, 2024
** mini_printf
** File description:
** nb_len
*/

#include "eyes.h"

int hnb_len(int nb)
{
    int cpt = 0;

    if (nb < 0) {
        nb *= -1;
        cpt++;
    }
    while (nb > 0) {
        nb = nb / 10;
        cpt++;
    }
    return cpt;
}

int lnb_len(long int nb)
{
    int cpt = 0;

    if (nb < 0) {
        nb *= -1;
        cpt++;
    }
    while (nb > 0) {
        nb = nb / 10;
        cpt++;
    }
    return cpt;
}

int nb_len(int nb)
{
    int cpt = 0;

    if (nb < 0) {
        nb *= -1;
        cpt++;
    }
    while (nb > 0) {
        nb = nb / 10;
        cpt++;
    }
    return cpt;
}
