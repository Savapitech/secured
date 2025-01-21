/*
** EPITECH PROJECT, 2025
** __
** File description:
** _
*/

#include "secured.h"

char *ht_search(hashtable_t *ht, char *key)
{
    int hash_vl;
    size_t hash_i;
    node_t *finded_node;

    if (ht == NULL || key == NULL)
        return FAILURE_MSG_PTR("Hashtable ptr is required !");
    hash_vl = ht->fnct_hash(key, e_strlen(key));
    hash_i = hash_vl % ht->len;
    if (hash_i > (size_t)ht->len)
        return NULL;
    finded_node = ht[hash_i].data;
    if (finded_node == NULL)
        return NULL;
    for (; finded_node->hash != hash_vl && finded_node->next != NULL;
        finded_node = finded_node->next);
    if (finded_node->hash != hash_vl)
        return NULL;
    return finded_node->data;
}
