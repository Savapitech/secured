/*
** EPITECH PROJECT, 2025
** secured
** File description:
** hash
*/

#include "secured.h"

int hash(char *key, int len)
{
    unsigned int hash = 0;
    int i = 0;

    for (; i < len; i++) {
        hash += (unsigned char)key[i];
        hash += (hash << 10);
        hash ^= (hash >> 6);
    }
    hash += (hash << 3);
    hash ^= (hash >> 11);
    hash += (hash << 15);
    return hash;
}
