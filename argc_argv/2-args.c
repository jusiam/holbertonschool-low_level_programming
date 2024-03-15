#include <stdio.h>
#include "main.h"
/**
 * main - check the code
 * @argc: argc
 * @argv: argv
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	(void) argc;
	int i = 0;
	while (argv >= i)
	{
	printf("%s\n", argv[i]);
	i++;
	return (0);
	}
}
