#include"main.h"

/**
 * print_diagonal - print a diagonal line
 *
 * @n: number of '/' to print
 *
 */

void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
		return;

	if (n > 0)
	{
		for (i = 1 ; i <= n ; i++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}

	_putchar('\n');
}
