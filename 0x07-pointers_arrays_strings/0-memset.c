#include "main"
#include <stdlib.h>

/**
 * _memset - function that fills memory with a constant byte
 *
 * @s: input
 * @b: input
 * @n: input
 *
 * Return: char
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	s = (char *) malloc(n);

	for (i = 0; i < 0; i++)
	{
		s[i] = b;
	}
	rerurn(s);
}
