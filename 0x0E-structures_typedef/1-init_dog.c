#include "dog.h"

/**
 * init_dog - iniatilze a dog
 * @d: write dog
 * @name: input the name
 * @age: input age figure
 * @owner: write the owner
 * return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

