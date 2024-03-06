#include "main.h"
#include <stdio.h>
#include <string.h>

/**
*_strspn - gets the length of a prefix substring.
*@s: pointer to the character string to parse
*@accept: pointer to the charactere string containing
*the character to search for
*Return: Number of characters in the initial segment of s
*which only accept characters
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;

while (*s != '\0' && strchr(accept, *s) != NULL)
{
count++;
s++;
}
return (count);
}
