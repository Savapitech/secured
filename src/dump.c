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
    node_t *tmp_node = ht[i].data;

    while (tmp_node != NULL) {
        my_printf("> %01d - %s\n", tmp_node->hash, tmp_node->data);
        tmp_node = tmp_node->next;
    }
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
