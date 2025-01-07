/*
** EPITECH PROJECT, 2024
** eyes
** File description:
** e_nb_len
*/

#include "eyes.h"

int e_nb_len(int nb)
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
