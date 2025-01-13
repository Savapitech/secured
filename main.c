/*
** EPITECH PROJECT, 2025
** __
** File description:
** _
*/

#include <stdio.h>

#include "secured.h"
int main(void)
{
    hashtable_t *ht = new_hashtable(&hash, 1);

    ht_dump(ht);
    for (size_t i = 100000; i > 0; i--)
        ht_insert(ht, "ui", "non");
    ht_insert(ht, "sdgf", "n");
    ht_dump(ht);
}
