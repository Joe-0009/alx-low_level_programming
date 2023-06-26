#include"main.h"

/**
 * _strlen - returns the length of a string
 *
 * @s: the input of string
 *
 * Return: the length
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
