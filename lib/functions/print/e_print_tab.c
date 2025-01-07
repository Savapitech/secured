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
        my_putstr(tab[i]);
        my_putchar('\n');
    }
    return 0;
}
