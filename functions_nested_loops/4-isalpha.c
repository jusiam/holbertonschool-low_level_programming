#include "main.h"
/**
 * Prototype: int _isalpha int c
 * Returns 1 if c is a letter, lowercase or uppercase
 * Returns 0 otherwise
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
