/*
** EPITECH PROJECT, 2025
** secured
** File description:
** hashtable
*/

#ifndef HASTABLE_H_
    #define HASTABLE_H_

    #include <string.h>
    #include "eyes.h"

typedef struct node_s {
    char *data;
    struct node_s *next;
} node_t;

typedef struct hashtable_s {
    int hash;
    int (*fnct_hash)(char *, int);
    int len;
    node_t *data;
} hashtable_t;

// hash
int hash(char *key, int len);

//create and destroy table
hashtable_t *new_hashtable(int (*hash)(char *, int), int len);
void delete_hashtable(hashtable_t *hashtable);

// handle table
void ht_dump(hashtable_t *ht);

#endif /* !HASTABLE_H_ */
