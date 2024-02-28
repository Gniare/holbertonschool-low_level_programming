#include "main.h"

/**
*print_square - prints a square followed by a new line
*@size: size of the square
*/

void print_square(int size)
{
int ligne, colonne;

if (size > 0)
{
for (ligne = 1; ligne <= size; ligne++)
{
for (colonne = 1; colonne <= size; colonne++)
{
_putchar('#');
}
_putchar('\n');
}
}
else
_putchar('\n');
}
