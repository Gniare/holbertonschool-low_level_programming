#include "main.h"

/*
*puts_half - prints half of a string, followed by new line
*@str: string
*
*Return: void
*/

void puts_half(char *str)
{
int i, j, h;

i = 0;
while (str[i] != '\0')
{
i++;
}
h = i; /* last caractere */
j = h / 2; /* moitié de la chaine */
while (j < h)
/* tant que moitie est inf ou egale au dernier caractere */
{
_putchar(str[j]);
j++;
}
_putchar('\n');
}
