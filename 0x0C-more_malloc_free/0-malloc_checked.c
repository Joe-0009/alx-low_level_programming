#include <stdlib.h>

/*
 * malloc_checked - function that allocates memory using malloc.
 *
 * @b: input int
 *
 */

void *malloc_checked(unsigned int b)
{
	void *new_mem;

	new_mem = malloc(b);
	if (new_mem == NULL)
		exit(98);
	return (new_mem);
}
