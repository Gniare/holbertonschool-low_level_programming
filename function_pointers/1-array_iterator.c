#include <stdio.h>
#include "function_pointers.h"
/**
*array_iterator - that takes an array of integers
*@size: The size of the array
*@array: A pointer to an integer array
*@action: A pointer to a function that takes an integer as an argumen
*Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i = 0;

while (i < size)
{
action(array[i]);
i++;
}
}
