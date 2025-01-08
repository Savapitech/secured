/*
** EPITECH PROJECT, 2025
** secured
** File description:
** e_put_in_linked_list
*/

#include "eyes.h"
#include "secured.h"

int e_add_node(node_t **head, char *data)
{
    node_t *new_node = malloc(sizeof(node_t));
    node_t *tmp = *head;

    if (new_node == NULL)
        return RETURN_FAILURE;
    new_node->data = data;
    new_node->next = NULL;
    while (tmp->next != NULL)
        tmp = tmp->next;
    tmp->next = new_node;
    return RETURN_SUCCESS;
}
