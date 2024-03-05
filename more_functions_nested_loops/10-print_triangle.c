#include "main.h"
#include <stdio.h>

/**
 * main - function of main
 * Return: returns the value
 */

int main(void)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int x, y;

		for (x = 0 ; x < n ; x++)
		{
			for (y = 1 ; y <= x; y++)
				_putchar(' ');
			_putchar('#');
			_putchar('\n');
		}
	}
}
