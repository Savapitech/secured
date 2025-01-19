/*
** EPITECH PROJECT, 2025
** __
** File description:
** _
*/

#include <stdio.h>
#include "eyes.h"
#include "secured.h"

void print_data(node_t *data)
{
    while (data != NULL) {
        my_printf("> %01d - %s\n", data->hash, data->data);
        data = data->next;
    }
}

void ht_dump(hashtable_t *ht)
{
    size_t len;

    if (ht == NULL)
        return;
    len = ht->len;
    for (size_t i = 0; i < len; i++) {
        my_printf("[%01lu]:\n", i);
        if (ht[i].data != NULL)
            print_data(ht[i].data);
    }
}
