#include <stddef.h>
#include <stdlib.h>

/**
 * create_array - a function that creates an array of chars,
 * and initializes it with a specific char
 *
 * @size: size input
 * @c: input char
 *
 * Return: NULL if size = 0
 */

char *create_array(unsigned int size, char c)
{
	if (size == 0)
		return (NULL);

	int *p;

	p = (int *)malloc(size * (sizeof(char)));

	*p = c;

	return (p);
}
