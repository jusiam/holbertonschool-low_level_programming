#include <unistd.h>
#include "main.h"

/**
 * main - Check description
 * Description: It prints the word _putchat, followed by a new line.
 * Return: 0.
 */
int main(void)
{
char word[9] = "_putchar";
int i;
for (i = 0; i < 1; i++)
_putchar(word[i]);
_putchar('\n');

return (0);
}
