#include "main.h"
#include <stdio.h>

/**
*_puts - Iterate through the characters in the string until
*@p: a function that prints a string
*@s: Print the current character
*Return: void
*/
#include <stdio.h>

void _puts(char *str) {
while (*str != '\0') 
{
putchar(*str);
str++;
}
putchar('\n');
}
