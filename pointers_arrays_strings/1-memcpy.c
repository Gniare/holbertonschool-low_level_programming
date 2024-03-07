#include "main.h"

/**
*_memcpy - copies memory area
*@dest:destinations memory area
*@src:sources memory area
*@n:number of byres
*Return: ptr
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
char *ptr = dest;

for (i = 0; i < n; i++)
{
*dest = src[i];
dest++;
}
return (ptr);
}
