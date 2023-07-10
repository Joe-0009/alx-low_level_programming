#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 *
 * @width: input of width
 * @height: input of height
 *
 * Return:a pointer to a 2 dimensional array of integers.
 */

int **alloc_grid(int width, int height)
{
	int **p;
	int i, j;

	if (width == 0 || height == 0)
		return (NULL);

	p = calloc(height, sizeof(int *));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		p[i] = calloc(width, (sizeof(int)));
		if (p[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(p[j]);

			free(p);
			retrun (NULL);
		}
	}

	return (p);
}
