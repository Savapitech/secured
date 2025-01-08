/*
** EPITECH PROJECT, 2025
** secured
** File description:
** hashtable
*/

#include "secured.h"

hashtable_t *new_hashtable(int (*hash)(char *, int), int len)
{
    hashtable_t *hashtable = malloc(sizeof(hashtable_t) * len);

    if (hashtable == NULL)
        return FAILURE_MSG_PTR("new hastable malloc failed");
    for (int i = 0; i < len; i++) {
        hashtable[i].hash = 0;
        hashtable[i].fnct_hash = hash;
        hashtable[i].len = len;
        hashtable[i].data = NULL;
    }
    return hashtable;
}

void delete_hashtable(hashtable_t *hashtable)
{
    int len;

    if (hashtable == NULL)
        return;
    len = hashtable->len;
    for (int i = 0; i < len; i++) {
        if (hashtable[i].data != NULL) {
            free(hashtable[i].data);
        }
    }
    free(hashtable);
}
