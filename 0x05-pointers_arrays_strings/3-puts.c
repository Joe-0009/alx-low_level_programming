#include"main.h"
#include <stdio.h>


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
		printf(%c, str[i]);
		i++;
	}
	printf(%c, '\n');
}
