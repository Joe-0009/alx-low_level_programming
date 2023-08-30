#include "main.h"

/**
 * _strlen_recursion - returns the length of a fucntion
 *
 * @s: the string
 *
 * Return: the length of the string
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (s[i] != '\0')
	{
		i++;
		_strlen_recursion(s + 1);
	}
	return (i - 1);
}
