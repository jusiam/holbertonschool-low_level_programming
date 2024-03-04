#include "main.h"

/**
 * print_line - check the code.
 * Return: returns 0
 */

void print_line(int n)
{
if (n <= 0)
_putchar('\n');
else
{
int x
for (x = 0 ; x < n ; x++)
{
_putchar("_");
_putchar('\n');
}
}
