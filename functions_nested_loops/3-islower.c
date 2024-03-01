#include "main.h"
/**
 * _islower - checkes for lowercases in parameter or member 'c'
 * return value of '_islower' is 1 if it's a lowercase, 0 if else
 */
int _islower(int c)
{
if (c > 96 && c < 123)
return (1);
else
return (0);
}
