#include <stddef.h>

/**
*_strspn - gets the length of a prefix substring.
*@s: pointer to the character string to parse
*@accept: pointer to the charactere string containing
*the character to search for
*Return: Number of characters in the initial segment of s
*which only accept characters
*/

unsigned int _strspn(char *s, char *accept)
{
if (s == NULL || accept == NULL)
{
// Handle invalid input
return 0;
}

unsigned int length = 0;
char *ptr = s;

// Iterate through the string 's'
while (*ptr != '\0') {
char *acceptPtr = accept;

// Check if the current character in 's' is in 'accept'
while (*acceptPtr != '\0') {
if (*ptr == *acceptPtr)
{
break;
}
acceptPtr++;
}

// If the character is not in 'accept', stop the loop
if (*acceptPtr == '\0')
{
break;
}

// Increment the length and move to the next character in 's'
length++;
ptr++;
}

return length;
}
