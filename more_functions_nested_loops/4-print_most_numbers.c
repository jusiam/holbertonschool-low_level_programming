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

	for (a = 48; a < 58; a++)
	if (a != 50 && a != 52)
	{
		_putchar(a);
	}
	_putchar('\n');
}
