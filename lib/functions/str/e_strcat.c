/*
** EPITECH PROJECT, 2024
** strcat
** File description:
** idk
*/

#include "eyes.h"

char *e_strcat(char *dest, char const *src)
{
    int j = 0;

    for (j = 0; dest[j] != '\0'; j++);
    for (int i = 0; src[i] != '\0'; i++) {
        dest[j] = src[i];
        j++;
    }
    return dest;
}
