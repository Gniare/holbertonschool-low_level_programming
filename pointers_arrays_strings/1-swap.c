#include "main.h"
#include <stdio.h>

/**
*swap_int - he values of two integers
*@a: b
*@b: a
*Return: void
*/
void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
