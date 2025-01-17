/*
** EPITECH PROJECT, 2025
** secured
** File description:
** e_put_in_linked_list
*/

#include "eyes.h"
#include "secured.h"

int e_add_node(node_t **head, char *data, int hash)
{
    node_t *new_node = malloc(sizeof(node_t));

    if (new_node == NULL)
        return RETURN_FAILURE;
    new_node->data = data;
    new_node->hash = hash;
    new_node->next = *head;
    *head = new_node;
    return RETURN_SUCCESS;
}
