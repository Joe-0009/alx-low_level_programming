#include"main.h"
#include <string.h>

/**
 * rev_string - reverse a string
 *
 * @s: input
 *
 */


void rev_string(char *s)
{
	int l, i, tmp;

	i = 0;
	l = 0;

	while (s[l] != '\0')
		l++;

	while (i < l / 2)
	{
		tmp = s[l - 1 - i];
		s[l - 1 - i] = s[i];
		s[i] = tmp;
		i++;
	}
}
