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

    my_printf("> %01d - %s\n", tmp_node->hash, tmp_node->data);
    for (; tmp_node->next != NULL; tmp_node = tmp_node->next)
        my_printf("> %01d - %s\n", tmp_node->hash, tmp_node->data);
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
