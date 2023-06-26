#include"main.h"

/**
 * print_rev - print in reverse
 *
 * @s: input
 *
 */

void print_rev(char *s)
{
	int len ;
	len = _strlen(*s);

	int i;

	while (len >= 0)
	{
		_putchar(s[len]);
		len--;
	}
	_putchar('\n);
}
