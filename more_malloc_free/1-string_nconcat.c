#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
*string_nconcat - This function concatenates two strings s1 and s2
*@s1:
*@s2:
*@n: is a number of charaters
*Return: NULL
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

size_t len_s1 = strlen(s1);
size_t len_s2 = strlen(s2);

if (n >= len_s2)
n = len_s2;

char *result = (char *)malloc(len_s1 + n + 1);
if (result == NULL)
return NULL;

strcpy(result, s1);

strncat(result, s2, n);

return result;
}
