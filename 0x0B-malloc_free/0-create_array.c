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
	char *p;
	char *rem;
	int i;

	if (size == 0)
	{
		return (NULL);
	}

	p = (char *)malloc(size * (sizeof(char)));
	rem = p;
	while (p[i] != '\0')
	{
		p[i] = c;
		i++;
	}

	return (rem);
}
