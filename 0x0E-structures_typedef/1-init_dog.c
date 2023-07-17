#include "dog.h"

/**
 * init_dog - function that initialize a variable of type struct
 *
 * @d: object name
 * @name: name
 * @age: age
 * @owner: owners name
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	strncpy(dog->name, name, sizeof(dog->name) - 1);
	dog->name[sizeof(dog->name) - 1] = '\0';

	dog->age = age;

	strncpy(dog->owner, owner, sizeof(dog->owner) - 1);
	dog->owner[sizeof(dog->name) - 1] = '\0';
}
