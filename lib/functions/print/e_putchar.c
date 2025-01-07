/*
** EPITECH PROJECT, 2024
** putchar
** File description:
** display char
*/

#include "eyes.h"

void e_putchar(char c)
{
    write(1, &c, 1);
}
