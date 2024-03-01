#include <stdio.h>

/**
*int _strlen - this function that returns the length of a string.
*Return int
*/

int _strlen(char *s)
{
int longueur = 0;
// Parcours de la chaîne jusqu'à rencontrer le caractère nul ('\0')
while (*s != '\0')
{
longueur++;
s++;
}
return longueur;
}
