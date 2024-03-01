#include "main.h"
#include <stdio.h>

/**
*swap_int - 
*@n: the values of two integers
*Return: void
*/
void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;*b = temp;
}
