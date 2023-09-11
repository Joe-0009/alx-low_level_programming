#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: pointer to structure
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name)
		{
			printf("Name : %s\n", d->name);
		} else
		{
			printf("Name : (nil)\n");
		}
		if (d->age)
			printf("Age : %.6f\n", d->age);
		if (d->name)
		{
			printf("Owner : %s\n", d->owner);
		} else
		{
			printf("Owner : (nil)\n");
		}
	}
}
