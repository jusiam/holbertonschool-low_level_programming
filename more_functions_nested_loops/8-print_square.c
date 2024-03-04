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
		int x;

		for (x = 1 ; x < size ; x++)
			_putchar('#');
			_putchar('\n');
		}
	}
}
