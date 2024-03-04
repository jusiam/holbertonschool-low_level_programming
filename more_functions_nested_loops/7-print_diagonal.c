#include "main.h"

/**
 * print_diagonal - check the code.
 * @n: parameter to be checked 
 * n is the number of times the character \ should be printed
 * Return: returns 0
 */

void print_diagonal(int n)
{
if (n <= 0)
_putchar('\n');
else
{
int x;

for (x = 0 ; x < n ; x++)
_putchar(92);
_putchar('\n');
_putchar(' ');
}
}
