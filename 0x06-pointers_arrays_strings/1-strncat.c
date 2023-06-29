#include "main.h"

/**
 * _strncat - appends
 * 
 * @dest: desti string
 * @src: soure string
 * @n: number
 *
 * Return: dest
 *
 */

char *_strncat(char *dest, char *src, int n)
{
	char* arr ;
	int i;

	arr = dest;

	while (*dest != '\0')
		dest++;

	for (i = 0; i <= n; i++)
	{
		*dest = *src;
	}

	*dest = '\0';

	return (arr);
}
