#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 *@d: array
 *@name: name
 *@age: age
 *@owner: owner
 * Description: Initialize the strycture of a dog
 */

void print_dog(struct dog *d);
{
	if (d == NULL)
	return;
	if (d->name == NULL)
	printf("Name: (nil)\n");
	else
	printf("Name: %s\n", d->name);
	if (d->age == NULL)
	printf("Age: (nil)\n");
	else
	printf("Age: %f\n", d->age);
	if (d->owner == NULL)
	printf("Owner: (nil)\n");
	else
	printf("Owner: %s\n", d->name);
	}
	