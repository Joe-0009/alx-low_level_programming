#include "dog.h"
#include <stdio.h>

/**
 * print_dog - a function that prints a struct dog
 *
 * @d: pointer to dog
 *
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name == NULL)
			prntf("Name : (nil)\n");
		else
			prntf("Name : %s\n", d->name);

		if (d->age == NULL)
			prntf("Age : (nil)\n");
		else
			prntf("Age : %.6f\n", d->age);

		if (d->owner == NULL)
			prntf("Owner : (nil)\n");
		else
			prntf("Owner : %s\n", d->owner);
	}
}
