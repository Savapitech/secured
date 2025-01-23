/*
** EPITECH PROJECT, 2025
** __
** File description:
** _
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "secured.h"

char *generate_random_string(size_t length)
{
    const char charset[] = "-+][()&^$#$%!^&@*()#$_,./abcdefghijklmnopqrstuvwxy"
        "zABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    size_t charset_size = sizeof(charset) - 1;
    char *random_string = malloc(length + 1);

    if (!random_string) {
        fprintf(stderr, "Erreur d'allocation de mémoire\n");
        exit(EXIT_FAILURE);
    }
    for (size_t i = 0; i < length; i++) {
        int key = rand() % charset_size;
        random_string[i] = charset[key];
    }
    random_string[length] = '\0';
    return random_string;
}

int main(void)
{
    hashtable_t *ht = new_hashtable(&hash, 100);

    srand(time(NULL));
    for (size_t i = 1000; i > 0; i--) {
        char *random_key = generate_random_string(10);
        char *random_value = generate_random_string(10);
        ht_insert(ht, random_key, random_value);
        free(random_key);
        free(random_value);
    }
    ht_dump(ht);
    return 0;
}
