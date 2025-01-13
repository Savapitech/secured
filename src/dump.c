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
void dump_data_reverse(node_t *node)
{
    if (node == NULL)
        return;
    dump_data_reverse(node->next);
    my_printf("> %01d - %s\n", node->hash, node->data);
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
            dump_data_reverse(ht[i].data);
    }
}
