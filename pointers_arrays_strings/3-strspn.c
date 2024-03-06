#include "main.h"
#include <stdio.h>

/**
*_strspn - The function is used to calculate the length of the initial segment of a string consisting of only the characters that are present in another specified string
*@s:the number of bytes in the initial
*Return: s
*/

unsigned int _strspn(char *s, char *accept)
{
int i = 0;
int j;
int h = 0;
while (s[i] != '\0')
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
h++;
break;
}
if (accept[j + 1] == '\0' && s[i] != accept[i])
return (h);
i++;
}
return (h);
}
