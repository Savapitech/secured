/*
** EPITECH PROJECT, 2025
** secured
** File description:
** e_create_linked_list
*/

#include <stdlib.h>

#include "eyes.h"

node_t *e_create_linked_list(char *data)
{
    node_t *list = malloc(sizeof(node_t));

    if (list == NULL)
        return NULL;
    list->data = data;
    list->next = NULL;
    return list;
}
