#include <unistd.h>
#include "main.h"
/**
 * main - Check description
 * Description: Write a function that prints the alphabet, in lowercase
 * Return: 0.
 */
int _islower(int c)
{
if (c > 96 && c < 123)
return (1);
else
return (0);
}
