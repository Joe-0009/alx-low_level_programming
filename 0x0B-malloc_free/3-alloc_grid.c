#include <stdlib.h>

/**
 * alloc_grid - a function that returns a pointer to a 2 dimensional array of integers.
 *
 * @width: input of width
 * @height: input of height
 *
 * Return:a pointer to a 2 dimensional array of integers.
 */

int **alloc_grid(int width, int height)
{
	int **p;
	int i;

	if (width == 0 || height == 0)
		return (NULL);

	p = (int *)calloc(height, sizeof(int *));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		p[i] = (int *)calloc(width, (sizeof(int)));
	}

	return (p);
}
