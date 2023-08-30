


/**
 * _pow_recursion - function returns x raised to the power of y.
 *
 * @x: the number to power
 * @y:the number to power to
 *
 * Return: powred number
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
