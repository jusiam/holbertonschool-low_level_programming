#include "main.h"

/**
 * print_square - function to print # on the terminal
 * @size: parameter to be checked
 * Return: returns the value 0
 */

void print_square(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int x, y;

		for (x = 0 ; x < n ; x++)
		{
			for (y = 0 ; y <= x; y++)
				_putchar('#');
			_putchar('#');
			_putchar('\n');
		}
	}
}
