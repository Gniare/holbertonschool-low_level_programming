#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
* add_node_end - adds new node at the end of a list
* @head: pointer to a pointer to the start of the list
* @str: string to be duplicated and added to the new node
* Return: str needs to be duplicated
*/

list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node;

if (str == NULL)
{
return (NULL);
}
new_node = malloc(sizeof(list_t));
if (new_node == NULL)
{
return (NULL);
}
new_node->str = strdup(str);
if (new_node->str == NULL)
{
free(new_node);
return (NULL);
}
new_node->len = strlen(str);
new_node->next = NULL;

if (*head == NULL)
{
*head = new_node;
}
else
{
list_t *temp = *head;

while (temp->next != NULL)
temp = temp->next;
temp->next = new_node;
}
return (new_node);
}
