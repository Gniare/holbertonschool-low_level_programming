#include <stdio.h>
#include "main.h"
/**
*_strlen - this function that returns the length of a string.
*@s: texte
*Return: lenght
*/

int _strlen(char *s)

{
int length = 0;
while (*s != '\0')
{
length++;
s++;
}
return (length);
}
