
#include <stddef.h>
#include "function_pointers.h"

/**
*int_index - search for integer in array with function pointer
*@array: array
*@size: size of array
*@cmp: pointer to searching/comparing function to execute
*Return: index where integer's found, -1 if not found or array not present
*/

int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (array == NULL || cmp == NULL || size <= 0)
{
return (-1);
}

for (i = 0; i < size; i++) /* parcours l'array */
{
if (cmp(*(array + i)))
{
return (i);
}
}
return (-1);
}
