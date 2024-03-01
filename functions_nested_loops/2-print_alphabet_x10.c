#include <unistd.h>
#include "main.h"
/**
 * main - Check description
 * Description: Write a function that prints the alphabet, in lowercase
 * Return: 0.
 */
void print_alphabet_x10(void)
{
char i;
int j;
for (j = 0; j < 260; j++)
{
for (i = 'a'; i <= 'z'; i++)
_putchar(i);
_putchar('\n');
}
}