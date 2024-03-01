#include <unistd.h>
#include "main.h"
/**
 * main - Check description
 * Description: print_alphabet - uses _putchar function to print
 * Return: 0.
 */
void print_alphabet(void)
{
char i;
for (i = 'a'; i <= 'z'; i++)
_putchar(i);
_putchar('\n');
}
