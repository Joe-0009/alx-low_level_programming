#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog -  function that creates a new dog.
 *
 * @name: the name of the dog
 * @age: the age of the new dog
 * @owner: the name of the new owner
 *
 * Return: new dog created
 *
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	if (!name || age < 0 || !owner)
		return (NULL);

	d = (dog_t *)malloc(sizeof(dog_t));
	if (!d)
		return (NULL);

	d->name = malloc(strlen(name) + 1);
	if ((*d).name == NULL)
	{
		free(dog);
		return (NULL);
	}
	d->name = strncpy(d->name, name);

	d.age = age;

	d->owner = malloc(strlen(owner) + 1);
	if ((*d).owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	d->owner = strncpy(d->owner, owner);

	return (d);
}
