#include "main.h"

/**
 * void more_numbers - prints 10 times the numbers, from 0 to 14
 * use _putchar three times
 * _putchar to print the numbers
 * return void 
 */
void more_numbers(void)
{
	int i, j;
	for (j = 0; j < 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			_putchar(i + '0');
			if (i < 14)
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
