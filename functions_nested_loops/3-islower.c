#include "main.h"
/**
 * _islower - checks for lowercases in parameter int c
 * return value = 1 if it's a lowercase, value=0 if uppercase
 */
int _islower(int c)
{
if (c > 96 && c < 123)
return (1);
else
return (0);
}
