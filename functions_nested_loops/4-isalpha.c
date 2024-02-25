#include "main.h"
/**
 * _isalpha - returns 1 if c is a letter otherwise returns 0.
 * @c : number
 *
 * Return: int
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
