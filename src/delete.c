/*
** EPITECH PROJECT, 2025
** secured
** File description:
** delete
*/

#include "eyes.h"
#include "secured.h"

static
int check_list(int hash_vl, node_t *tmp, node_t *prev)
{
    for (; tmp->next != NULL && tmp->hash != hash_vl; tmp = tmp->next) {
        prev = tmp;
    }
    if (tmp->next == NULL && tmp->hash == hash_vl) {
        prev->next = NULL;
        free(tmp->data);
        free(tmp);
        return -1;
    }
    return RETURN_SUCCESS;
}

static
int delete_node(node_t **head, int hash_vl)
{
    node_t *tmp = *head;
    node_t *prev = *head;

    if (*head == NULL)
        return RETURN_FAILURE;
    MY_DEBUG_MSG("head not null.\n");
    if (tmp->data != NULL && tmp->hash == hash_vl) {
        *head = tmp->next;
        free(tmp->data);
        free(tmp);
        return RETURN_SUCCESS;
    }
    if (check_list(hash_vl, tmp, prev) == -1)
        return RETURN_SUCCESS;
    if (tmp->next == NULL && tmp->hash != hash_vl)
        return RETURN_FAILURE;
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
