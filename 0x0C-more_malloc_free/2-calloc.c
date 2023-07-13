#include "main.h"

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: n elements
 * @size: bytes
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * zize);

	if (!p)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		s[i] = '0';
	return (p);
}
