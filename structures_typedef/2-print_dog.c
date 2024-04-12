#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 *@d: array
 *@name: name
 *@age: age
 *@owner: owner
 * Description: Initialize the strycture of a dog
 */

void print_dog(struct dog *d)
{
	if (d == 0)
	return;
	if (d->name == 0)
	printf("Name: (nil)\n");
	else
	printf("Name: %s\n", d->name);
	if (d->age == 0)
	printf("Age: (nil)\n");
	else
	printf("Age: %f\n", d->age);
	if (d->owner == 0)
	printf("Owner: (nil)\n");
	else
	printf("Owner: %s\n", d->owner);
	}
