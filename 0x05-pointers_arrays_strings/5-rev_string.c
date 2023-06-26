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
	int len = strlen(s) - 1;
	int i =0;
	char str[len];

	while (i <= len)
	{
		
		str[i] = s[len];
		i++;
		len--;
	}
	str[i] = '\0';
}
