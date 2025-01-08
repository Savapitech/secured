/*
** EPITECH PROJECT, 2025
** __
** File description:
** _
*/

#include <stdio.h>

#include "eyes.h"
#include "secured.h"

static
void dump_data(hashtable_t *ht, size_t i)
{
    for (; ht[i].data != NULL; ht[i].data = ht[i].data->next)
    printf("> %01d - %s\n", ht[i].hash, ht[i].data->data);
}

void ht_dump(hashtable_t *ht)
{
    size_t len;

    if (ht == NULL)
        return;
    len = ht->len;
    for (size_t i = 0; i < len; i++) {
        printf("[%01lu]:\n", i);
        if (ht[i].data != NULL)
            dump_data(ht, i);
    }
}
