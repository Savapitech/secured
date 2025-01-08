/*
** EPITECH PROJECT, 2025
** secured
** File description:
** e_delete_node
*/

#include "eyes.h"
#include "secured.h"

int e_delete_node(node_t **head, node_t *node)
{
    node_t *tmp = *head;
    node_t *prev = NULL;

    if (*head == NULL)
        return RETURN_FAILURE;
    if (tmp != NULL && tmp == node) {
        *head = node->next;
        free(node);
        return RETURN_SUCCESS;
    }
    while (tmp != NULL && tmp != node) {
        prev = tmp;
        tmp = tmp->next;
    }
    if (tmp == NULL)
        return RETURN_FAILURE;
    prev->next = tmp->next;
    free(tmp);
    return RETURN_SUCCESS;
}
