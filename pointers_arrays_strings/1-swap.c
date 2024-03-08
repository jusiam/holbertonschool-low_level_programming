#include <stdio.h>
#include "main.h"

/**
 * swap_int - check the code.
 * @a @b: parameter to be checked
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
