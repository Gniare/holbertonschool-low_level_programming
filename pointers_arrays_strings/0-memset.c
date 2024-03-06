#include "main.h"
#include <stdio.h>

/**_memset - a function that fills memory with a constant byte.
*@s :pointer to  memory area
*@b :constant value
*@n :number of bytes to fill
*Return:memory area
*/
char *_memset(char *s, char b, unsigned int n)
{
int bytes = n;

if (bytes > 0)
{
int i;

for (i = 0; i < bytes; i++)
s[i] = b;
}
return (s);
}
