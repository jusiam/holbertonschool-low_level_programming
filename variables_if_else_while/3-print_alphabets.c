#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char alphabet;
for (alphabet = 'a'; alphabet <= 'z' ; alphabet++)
{
putchar(alphabet);
}
putchar('\n');
for (alphabet = 'a'; alphabet <= 'z' ; alphabet++)
{
putchar (toupper(alphabet));
}
return (0);
}
