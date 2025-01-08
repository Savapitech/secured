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
    hash_vl = hash(key, e_strlen(key));
    hash_len = ht->len;
    if (!hash_len)
        return -1;
    hash_i = hash_vl % hash_len;
    MY_DEBUG("Hash len [%lu] hash value [%d] hash index [%lu]\n", hash_len,
        hash_vl, hash_i);
    return hash_vl;
}
