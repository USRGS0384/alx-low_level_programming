#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - a struct dog
 * @d: print strcut dog
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)

		d->name = "(nil)";

	if (d->owner == NULL)

		d->owner = "(nil)";

	printf("name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
