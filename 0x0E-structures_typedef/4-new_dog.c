#include "dog.h"
#include <stdlib.h>

/**
 * new_dog -  function that creates a new dog.
 *
 * @name: the name of the dog
 * @age: the age of the new dog
 * @owner: the name of the new owner
 *
 * Return : new dog
 *
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog_t d = (struct dog_t *)malloc(sizeof(struct dog_t));

	if (!d)
		return (NULL);

	d->name = strncpy(d->name, name, sizeof(d->name) - 1);
	d->name[sizeof(d->name) - 1] = '\0';

	d.age = age;

	d->owner = strncpy(d->owner, owner, sizeof(d->owner) - 1);
	d->owner[sizeof(d->owner) - 1] = '\0';

	return (d);
}
