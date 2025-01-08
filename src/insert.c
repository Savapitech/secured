/*
** EPITECH PROJECT, 2025
** __
** File description:
** _
*/

#include "eyes.h"
#include "secured.h"

int ht_insert(hashtable_t *ht, char *key, char *value)
{
    int hash_vl;
    size_t hash_i;
    size_t hash_len;

    if (ht == NULL)
        return -1;
    hash_vl = ht->fnct_hash(key, e_strlen(key));
    hash_len = ht->len;
    if (!hash_len)
        return -1;
    hash_i = hash_vl % hash_len;
    if (ht[hash_i].data == NULL)
        ht[hash_i].data = e_create_linked_list(value);
    else if (e_add_node(&ht[hash_i].data, value) == RETURN_FAILURE)
        return FAILURE_MSG("Error when inserting data in node !");
    if (ht[hash_i].data == NULL)
        return FAILURE_MSG("Cannot create linked list to insert !");
    ht[hash_i].hash = hash_vl;
    MY_DEBUG("Hash len [%lu] hash value [%d] hash index [%lu]\n", hash_len,
        hash_vl, hash_i);
    return hash_vl;
}
