#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <main.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);

	return (0);
}