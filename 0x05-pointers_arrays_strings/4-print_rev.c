#include"main.h"
#include <string.h>

/**
 * print_rev - print in reverse
 *
 * @s: input
 *
 */

void print_rev(char *s)
{
	int len ;

	len = strlen(s) - 1;

	while (len >= 0)
	{
		_putchar(s[len]);
		len--;
	}
	_putchar('\n');
}
