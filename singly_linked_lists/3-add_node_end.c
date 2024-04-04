#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: Pointer to a pointer to the head of the list.
 * @str: String to be duplicated and stored in the new node.
 *
 * Return: Address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
    list_t *new_node, *last_node;
    char *new_str;

    if (str == NULL)
        return (NULL);

    /* Allocate memory for new node */
    new_node = malloc(sizeof(list_t));
    if (new_node == NULL)
        return (NULL);

    /* Duplicate the string */
    new_str = strdup(str);
    if (new_str == NULL)
    {
        free(new_node);
        return (NULL);
    }

    /* Assign data to the new node */
    new_node->str = new_str;
    new_node->len = strlen(new_str);
    new_node->next = NULL;

    /* If the list is empty, new node is the head */
    if (*head == NULL)
    {
        *head = new_node;
        return (new_node);
    }

    /* Traverse the list to find the last node */
    last_node = *head;
    while (last_node->next != NULL)
        last_node = last_node->next;

    /* Append the new node to the end of the list */
    last_node->next = new_node;

    return (new_node);
}
