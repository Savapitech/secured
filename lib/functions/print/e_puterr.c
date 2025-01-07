/*
** EPITECH PROJECT, 2025
** secured
** File description:
** e_puterr
*/

#include "secured.h"

void e_puterr(char const *str)
{
    write(2, str, e_strlen(str));
}
