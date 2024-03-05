#include "main.h"
#include <stdio.h>

/**
 * print_triangle - function to print # on the terminal
 * @n: parameter to be checked
 * Return: returns the value 0
 */

void print_triangle(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int x, y;

		for (x = 0 ; x < size ; x++)
		{
			for (y = 1 ; y <= x; y++)
				_putchar(' ');
			_putchar('#');
			_putchar('\n');
		}
	}
}
