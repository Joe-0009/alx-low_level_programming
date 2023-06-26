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
	while ((*dest = *src))
		;

	return (dest);
}
