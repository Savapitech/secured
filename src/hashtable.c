/*
** EPITECH PROJECT, 2025
** secured
** File description:
** hashtable
*/

#include "secured.h"

hashtable_t *new_hashtable(int (*hash_fnct)(char *, int), int len)
{
    hashtable_t *hashtable;

    if (len < 1)
        return NULL;
    if (hash_fnct == NULL)
        return FAILURE_MSG_PTR("hash function is required");
    hashtable = malloc(sizeof(hashtable_t) * len);
    if (hashtable == NULL)
        return FAILURE_MSG_PTR("new hastable malloc failed");
    for (int i = 0; i < len; i++) {
        hashtable[i].fnct_hash = hash_fnct;
        hashtable[i].len = len;
        hashtable[i].data = NULL;
    }
    return hashtable;
}

static
void delete_nodes(hashtable_t *hashtable, int i)
{
    node_t *tmp = hashtable[i].data;
    node_t *prev = NULL;

    while (tmp != NULL) {
        MY_DEBUG("Deleting node : [%s]\n", tmp->data);
        prev = tmp;
        tmp = tmp->next;
        free(prev->data);
        free(prev);
    }
}

void delete_hashtable(hashtable_t *hashtable)
{
    int len;

    if (hashtable == NULL)
        return;
    len = hashtable->len;
    for (int i = 0; i < len; i++) {
        if (hashtable[i].data != NULL)
            delete_nodes(hashtable, i);
        hashtable[i].len = 0;
    }
    free(hashtable);
}
