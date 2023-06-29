#iinclude "main.h"

/**
 * _strncpy - copies a string 
 *
 * @dest: string 1 inpiut
 * @src: string 2 input
 * @n: number input
 *
 * Return: string
 *
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *arr;
	int i;

	arr = dest;

	for (i = 0; i <= n; i++)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (arr);
}
