/*
** EPITECH PROJECT, 2025
** __
** File description:
** _
*/

#include "eyes.h"
#include "secured.h"

static
int update_value(node_t *node, int hash_vl, char *value)
{
    char *tmp_value;

    for (; node->hash != hash_vl && node->next != NULL; node = node->next);
    if (node->hash != hash_vl)
        return RETURN_FAILURE;
    tmp_value = node->data;
    node->data = e_strdup(value);
    if (node->data == NULL)
        return RETURN_FAILURE;
    free(tmp_value);
    return RETURN_SUCCESS;
}

int ht_insert(hashtable_t *ht, char *key, char *value)
{
    int hash_vl;
    size_t hash_i;
    size_t hash_len;

    if (ht == NULL || key == NULL || value == NULL)
        return RETURN_FAILURE;
    hash_vl = ht->fnct_hash(key, e_strlen(key));
    hash_len = ht->len;
    hash_i = ABS(hash_vl) % hash_len;
    if (ht_search(ht, key) != NULL)
        return update_value(ht[hash_i].data, hash_vl, value);
    if (ht[hash_i].data == NULL)
        ht[hash_i].data = e_create_linked_list(e_strdup(value), hash_vl);
    else if (e_add_node(&ht[hash_i].data, e_strdup(value), hash_vl) ==
        RETURN_FAILURE)
        return FAILURE_MSG("Error when inserting data in node !");
    if (ht[hash_i].data == NULL)
        return FAILURE_MSG("Cannot create linked list to insert !");
    return RETURN_SUCCESS;
}
