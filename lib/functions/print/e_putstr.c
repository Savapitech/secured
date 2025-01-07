/*
** EPITECH PROJECT, 2024
** put str
** File description:
** displays string
*/

#include "eyes.h"

int e_putstr(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        e_putchar(str[i]);
    return 0;
}
