#include "main.h"

/**
 * reverse_array - it reverse an array
 *
 * @a: an array fo integers
 * @n: the number if ellements to swap
 *
 * Return: nothing
 *
 */

void reverse_array(int *a, int n)
{
	int temp, s, e;

	s = 0;
	e = n - 1;

	while (s < e)
	{
		temp = a[s];
		a[s] = a[e];
		a[e] = temp;
		s++;
		e--;
	}
}
