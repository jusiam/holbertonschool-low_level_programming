#include "main.h"
#include <string.h>
/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer
 * @accept: pointer
 * Return: Always 0.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, count = 0;

	while (*(s) != 32)
	{
		while (*(accept + i) != '\0')
		{
			if (*(s) == *(accept + i))
				count++;
			i++;
		}
		i = 0;
		s++;
	}
	return (count);
}
