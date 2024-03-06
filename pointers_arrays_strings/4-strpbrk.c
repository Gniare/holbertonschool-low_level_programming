#include "main.h"
#include <stdio.h>

/*
 **_strpbrk - a function that searches a string for any of a set of bytes.
*
*/

#include <stddef.h>

char *_strpbrk(char *s, char *accept)
{
// Vérifier si les pointeurs s et accept ne sont pas nuls
if (s == NULL || accept == NULL)
{
return NULL;  // Si l'un des pointeurs est nul, retourner NULL
}
// Parcourir la chaîne s jusqu'à la fin ('\0')
while (*s != '\0')
{
// Initialiser un pointeur current_accept pour parcourir la chaîne accept
        char *current_accept = accept;

        // Parcourir la chaîne accept pour chaque caractère de s
        while (*current_accept != '\0') {
            // Vérifier si le caractère actuel de s correspond à un caractère de accept
            if (*s == *current_accept) {
                return s;  // Si c'est le cas, retourner le pointeur vers ce caractère dans s
            }
            current_accept++;  // Passer au caractère suivant dans accept
        }
        s++;  // Passer au caractère suivant dans s
    }

    return NULL;  // Aucun caractère correspondant n'a été trouvé, retourner NULL
}
