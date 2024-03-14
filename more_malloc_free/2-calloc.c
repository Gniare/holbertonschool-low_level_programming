#include <stdio.h>
#include <stdlib.h> // for malloc

/**
*calloc - function allocates memory for an array of
*nmemb elements of size bytes each and returns a pointer to the allocated memory.
*@size: each of size
*@nmemb: elements, each of size size
*Return: null 
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
if (nmemb == 0 || size == 0)
{
return NULL;
}

void *ptr = malloc(nmemb * size);

if (ptr == NULL)
{
return NULL;
}

unsigned int i;
unsigned int total_size = nmemb * size;
unsigned char *p = ptr;
for (i = 0; i < total_size; ++i)
{
p[i] = 0;
}

return ptr;
}
