#include <stdio.h>

/**
 * puts2 - prints every other character
 *
 * @str: input string
 */


void puts2(char *str)
{
	int i, l;

	i = 0;
	l = 0;

	while (str[i] != '\0')
	{
		l++;
	}

	while (i < l)
	{
		if (i % 2 == 0)
			printf("%c", str[i]);
	}
	printf("\n");
}
