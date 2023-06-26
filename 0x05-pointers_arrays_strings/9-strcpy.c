#include"main.h"

/**
 * *_strcpy - copies a string to another one
 *
 * @src: input first string
 * @dest: input second string
 *
 */




char *_strcpy(char *dest, char *src)
{
	for (i = 0; *src != '\0' ; i++)
	{
		*dest = *src;
		*src++;
		*dest++;
	}
	return (*dest);
}
