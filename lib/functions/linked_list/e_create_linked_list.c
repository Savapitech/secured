/*
** EPITECH PROJECT, 2025
** secured
** File description:
** e_create_linked_list
*/

#include "eyes.h"
#include "secured.h"

node_t *e_create_linked_list(void)
{
    node_t *list = malloc(sizeof(node_t));

    if (list == NULL)
        return NULL;
    list->data = NULL;
    list->next = NULL;
    return list;
}
