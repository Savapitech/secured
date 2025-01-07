/*
** EPITECH PROJECT, 2024
** strdup
** File description:
** alloc string and copy
*/

#include "eyes.h"

char *e_strdup(char const *src)
{
    char *str = malloc(sizeof(char) * (my_strlen(src) + 1));
    int i = 0;

    for (; src[i] != '\0'; i++)
        str[i] = src[i];
    str[i] = '\0';
    return str;
}
