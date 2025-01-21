/*
** EPITECH PROJECT, 2025
** secured
** File description:
** hash
*/

#include "secured.h"

static
const uint64_t FVN_OFFSET_BASIS = 0xcbf29ce484222325;

static
const uint64_t FVN_PRIME = 0x100000001b3;

int hash(char *key, int len)
{
    uint64_t k = FVN_OFFSET_BASIS;

    if (key == NULL)
        return -1;
    (void)len;
    for (; *key != '\0'; key++)
        k = (k * FVN_PRIME) ^ (uint64_t)*key;
    return (int)k;
}
