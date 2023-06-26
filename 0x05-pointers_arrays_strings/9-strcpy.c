#include"main.h"

/**
 * *_strcpy - copies a string to another one
 *
 * @src: input first string
 * @dest: input second string
 *
 * Return: pointer to the copied string
 */




char *_strcpy(char *dest, char *src)
{
	char *ptr = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (ptr);
}
