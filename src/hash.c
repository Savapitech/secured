/*
** EPITECH PROJECT, 2025
** secured
** File description:
** hash
*/

#include <stdint.h>

static
const uint64_t FVN_PRIME = 0x100000001b3;

int hash(char *key, int len __attribute__((unused)))
{
    uint32_t hash = 2166136261U;

    while (*key) {
        hash ^= (unsigned char)(*key);
        hash *= FVN_PRIME;
        key++;
    }
    return hash & 0x7FFFFFFF;
}
