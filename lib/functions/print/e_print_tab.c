/*
** EPITECH PROJECT, 2024
** eyes
** File description:
** e_print_tab
*/

#include "eyes.h"

int e_print_tab(char *const *tab)
{
    for (int i = 0; tab[i] != NULL; i++) {
        e_putstr(tab[i]);
        e_putchar('\n');
    }
    return 0;
}
