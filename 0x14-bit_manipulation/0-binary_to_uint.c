#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to uns int
 *
 * @b: char character
 *
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result;

	result = 0;

	if (b == NULL)
		return (0);
	while (*b != '\0')
	{
		if (*b != '1' && *b != '0')
			return (0);

		result = (result * 2) + (*b - '0');
		b++;
	}
	return (result);
}
