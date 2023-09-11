#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - it initiate a dog
 *
 * @d: dog struct
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
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
