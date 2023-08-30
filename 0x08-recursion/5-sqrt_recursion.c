#include "main.h"

/**
 * _squart - _sqrt_recursion
 * @n: integer paramtr
 * @i: integer parameter 
 * Return: sqrt
 */
int _squart(int n, int i)
{
	if (n < 0)
		return (-1);
	if ((i * i) > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_squart(n, i + 1));
}

/**
 * _sqrt_recursion - main funct
 * @n: int n
 * Return: int
 */
int _sqrt_recursion(int n)
{
	return (_squart(n, 1));
}

