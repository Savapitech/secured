/*
** EPITECH PROJECT, 2025
** __
** File description:
** _
*/

#include <stdbool.h>
#include <stdio.h>
#include <string.h>

#include "bloom.h"

void bloom_filter_add(bf_t *bf, const char *item)
{
    unsigned int hash = hash_fnc(item) % BLOOM_FILTER_SIZE;

    bf->bit_array[hash / 8] |= (1 << (hash % 8));
}

bool bloom_filter_check(const bf_t *bf, const char *item)
{
    unsigned int hash = hash_fnc(item) % BLOOM_FILTER_SIZE;

    if (!(bf->bit_array[hash / 8] & (1 << (hash % 8))))
        return false;
    return true;
}

int main(void)
{
    bf_t bf;
    const char *elements_to_add[] = {"apple", "banana", "cherry"};
    const char *elements_to_check[] = {"apple", "banana", "grape", "mango"};

    memset(bf.bit_array, 0, sizeof(bf.bit_array));
    for (int i = 0; i < 3; i++)
        bloom_filter_add(&bf, elements_to_add[i]);
    for (int i = 0; i < 4; i++) {
        if (bloom_filter_check(&bf, elements_to_check[i]))
            printf("[%s] est peut-être présent\n", elements_to_check[i]);
        else
            printf("[%s] est certainement absent\n", elements_to_check[i]);
    }
    return 0;
}
