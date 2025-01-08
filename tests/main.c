/*
** EPITECH PROJECT, 2025
** __
** File description:
** _
*/

#include "secured.h"

int main(void)
{
    hashtable_t *ht = new_hashtable(&hash, 4);

    ht_dump(ht);
}
