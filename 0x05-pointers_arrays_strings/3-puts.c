#include"main.h"


/**
 *  _puts - function that prints a string
 *
 *  @str: input value
 *
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\n')
	{
		_putchar(str[i]);
		i++;
	}
	_puthar('\n');
}
