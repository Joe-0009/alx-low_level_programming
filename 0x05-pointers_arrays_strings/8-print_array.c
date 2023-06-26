#include "main.h"
#include <stdio.h>

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

	for (i = 1; i <= n ; i++)
	{
		printf("%d", a[i]);
		if (i != n)
			printf(", ");
		
	}
	printf("\n");
}
