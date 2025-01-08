/*
** EPITECH PROJECT, 2025
** __
** File description:
** _
*/

#include <stdio.h>

#include "eyes.h"
#include "secured.h"

void ht_dump(hashtable_t *ht)
{
    size_t len;

    if (ht == NULL)
        return;
    len = ht->len;
    for (size_t i = 0; i < len; i++) {
        printf("[%01lu]:\n", i);
        if (ht[i].data != NULL)
            printf("> %01d - %s\n", ht[i].hash, ht[i].data->data);
    }
}
