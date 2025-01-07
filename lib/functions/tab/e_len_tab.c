/*
** EPITECH PROJECT, 2024
** eyes
** File description:
** len_tab
*/

#include "eyes.h"

int e_len_tab(char **tab)
{
    int count = 0;

    for (int i = 0; tab[i] != NULL; i++) {
        printf("[%s]\n", tab[i]);
        count++;
    }
    count += 1;
    return count;
}
