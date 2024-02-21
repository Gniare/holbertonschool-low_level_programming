#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	 if (n > 0) {
        printf("Le nombre %d is  positif.\n", n);
    } else if (n == 0) {
        printf("Le nombre is zéro.\n");
    } else {
        printf("Le nombre %d is négatif.\n", n);
    } 
	return (0);
}
