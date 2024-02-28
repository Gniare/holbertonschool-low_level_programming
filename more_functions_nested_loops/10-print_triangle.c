#include "main.h"

/*
*print_triangle - draws a triangle using #.
*@size: size of the triangle
*/

void print_triangle(int size)
{
int hauteur;
int largeur;
int triangle;

if (size <= 0)
{
_putchar('\n');
}

for (hauteur = 1; hauteur <= size; hauteur++)
{
for (largeur = 1; largeur <= (size - hauteur); largeur++)
{
_putchar(' ');
}
for (triangle = 1; triangle <= hauteur; triangle++)
{
_putchar('#');
}
_putchar('\n');
}
}
