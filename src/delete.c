/*
** EPITECH PROJECT, 2025
** secured
** File description:
** delete
*/

#include "eyes.h"
#include "secured.h"

static
int delete_node(node_t **head, int hash_vl)
{
    node_t *tmp = *head;
    node_t *prev = *head;

    if (*head == NULL)
        return RETURN_FAILURE;
    if (tmp->data != NULL && tmp->hash == hash_vl) {
        *head = tmp->next;
        free(tmp->data);
        free(tmp);
        return RETURN_SUCCESS;
    }
    for (; tmp->next != NULL && tmp->hash != hash_vl; tmp = tmp->next) {
        if (tmp->next == NULL && tmp->hash == hash_vl) {
            prev->next = NULL;
            free(tmp->data);
            free(tmp);
            return RETURN_SUCCESS;
        }
        prev = tmp;
    }
    if (tmp->next == NULL && tmp->hash != hash_vl) {
        return RETURN_FAILURE;
    }
    prev->next = tmp->next;
    free(tmp->data);
    free(tmp);
    return RETURN_SUCCESS;
}

int ht_delete(hashtable_t *ht, char *key)
{
    int hash_vl;
    size_t hash_i;
    size_t hash_len;

    if (ht == NULL)
        return RETURN_FAILURE;
    hash_vl = ht->fnct_hash(key, e_strlen(key));
    hash_len = ht->len;
    if (!hash_len)
        return RETURN_FAILURE;
    hash_i = hash_vl % hash_len;
    if (ht[hash_i].data == NULL)
        return RETURN_FAILURE;
    if (delete_node(&ht[hash_i].data, hash_vl) == RETURN_FAILURE)
        return RETURN_FAILURE;
    return RETURN_SUCCESS;
}
