#include "main.h"

/**
 * print_array - print n number from an array
 *
 * @a: input array
 * @n: input number of character to print
 *
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n ; i++)
		_putchar(a[i]);
	_putchar('\n');
}
