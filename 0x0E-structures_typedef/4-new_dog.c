#include "dog.h"
#include <stdlib.h>

/**
 * _strcopy - a function that returns @dest with a copy of a string from @src
 *
 * @src: string to copy
 * @dest: copy string to here
 *
 * Return: @dest
*/

char *_strcopy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

/**
 * leng - a function that gets a length of string
 *
 * @str: the string to get the length
 *
 * Return: length of @str
*/

int leng(const char *str)
{
	int i = 0;

	while (str)
		i++;
	return (i);
}




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
	dog_t *dog;

	/* if name and owner are empty and age is less than zero return null*/
	if (!name || age < 0 || !owner)
		return (NULL);

	dog = (dog_t *) malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (leng(name) + 1));
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (leng(owner) + 1));
	if ((*dog).owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->name = _strcopy(dog->name, name);
	dog->age = age;
	dog->owner = _strcopy(dog->owner, owner);

	return (dog);
}
