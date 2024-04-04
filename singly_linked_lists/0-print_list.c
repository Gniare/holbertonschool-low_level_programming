#include <stdio.h>
#include <lists.h>
#include <stdlib.h>
#include <unistd.h>

/**
* print_list - print all element of list_t
* @h: points to the next node
*
* Return: the number of nodes
*/

size_t print_list(const list_t *h)
{
size_t count = 0;
const list_t *current = h;

while (current != NULL)
{
if (current->str == NULL)
{
printf("[%d] %s\n", 0, "(nil)");
}
else
{
printf("[%d] %s\n", current->len, current->str);
}
{
current = current->next;
count++;
}
}
return (count);
}
