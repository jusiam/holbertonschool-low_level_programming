#include "main.h"
/**
 * _isalpha - Checks if a character is alphabetic.
 * c: The character to be checked.
 *
 * Return: 1 if character is letter, lowercase or uppercase, 0 otherwise.
 */
int _isalpha(int c)
{
if (c > 96 && c < 123)
return (1);
if (c > 64 && c < 91)
return (1);
else
return (0);
}
