#include <unistd.h>
#include "main.h"

/**
 * main - Check description
 * Description: It prints the word _putchat, followed by a new line.
 * Return: 0.
 */

void print_alphabet(void)
{
char i;
for (i = 'a'; i <= 'z'; i++)
_putchar(i);
_putchar('\n');
}
