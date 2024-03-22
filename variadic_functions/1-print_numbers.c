#include <stdarg.h> /* BibliothÃ¨que pour les fonctions va_* */
#include <stdio.h>
#include "variadic_functions.h"

/**
*print_numbers - imprimer nombres
*@separator: dÃ©limiteu a afficher entre les nombres
*@n: nombre total d'arguments dans la liste
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list valist; /* DÃ©claration de la liste d'arguments variables*/
unsigned int i; /* DÃ©claration d'un compteur pour l'itÃ©ratio*/

/* VÃ©rification si le nombre d'arguments est supÃ©rie a z */
if (n > 0)
{
va_start(valist, n); /* Initialisation de la liste d'arguments variables */

/* Boucle pour parcourir la liste d'arguments et imprimer les nombres */
for (i = 1; i <= n; i++)
{
printf("%d", va_arg(valist, int));
/* Imprime l'entier suivant dans la liste */

/* VÃ©ri si sÃ©parateur n'est pas nul et si ce n'est pas le dernier Ã©l */
if (i != n && separator != NULL)
printf("%s", separator); /* Imprime le sÃ©parateur*/
}

va_end(valist); /* LibÃ©rationmÃ©moire assocee Ãliste d'arguments variables*/
}

printf("\n"); /* Imprime une nouvelle ligne a la fin */
}
