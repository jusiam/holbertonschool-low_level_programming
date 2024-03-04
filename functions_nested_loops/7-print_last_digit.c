#include "main.h"

/**
 * print_last_digit - print last digit of a numer n.
 * @n: The integer to be computed.
 *
 * Return: value of the last digit.
 */
int print_last_digit(int n)
{
	if (n >= 0)
		return (n%10);
	else
		return (-n%10);
}
