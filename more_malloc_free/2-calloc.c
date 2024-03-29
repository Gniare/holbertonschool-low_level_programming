#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
*_calloc - function allocates memory for an array
*@size: each of size
*@nmemb: elements, each of size size
*Return: null or pointer
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ptr;
unsigned int i = 0;

if (nmemb == 0 || size == 0)
{
return (NULL);
}

ptr = malloc(nmemb * size);
if (ptr == NULL)
{
return (NULL);
}

while (i < nmemb * size)
{
ptr[i] = 0;
i++;
}
return (ptr);
}
