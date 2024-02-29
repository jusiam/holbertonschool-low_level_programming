#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char alphabet;
for (alphabet = '0'; alphabet <= '9' ; alphabet++)
{
putchar(alphabet);
}
{
char digits;
for (digits = 'a'; digits <= 'f' ; digits++)
putchar(digits);
}
putchar('\n');
return (0);
}
