/*
** EPITECH PROJECT, 2025
** __
** File description:
** _
*/

#include "secured.h"

int main(void)
{
    hashtable_t *ht = new_hashtable(&hash, 6);

    ht_dump(ht);
    ht_insert(ht, "oui", "non");
    ht_dump(ht);
}
