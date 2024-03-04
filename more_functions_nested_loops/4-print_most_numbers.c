#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - check the code.
 *
 * Return: 0
 */

void print_most_numbers(void)
{
	char a;

	for (a = 48; a < 50; a++)
	for (a = 50; a < 52; a++)
	for (a = 52; a <= 57; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
