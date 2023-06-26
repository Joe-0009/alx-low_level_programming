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
	int l = 0;

	while (s[l] != '\0')
		l++;

	int i = 0;
	int tmp;

	while (i <= l / 2)
	{
		tmp = s[l - 1 - i];
		s[l - 1 - i] = s[i];
		s[i] = tmp;
		i++;
	}
}
