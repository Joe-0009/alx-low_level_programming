/**
 * factorial - fucntion that returns factorial of a number
 *
 * @n: the number to make op on
 *
 * Return: the fuctorial of n
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	} else if (n == 0)
	{
		return (1);
	}
	return (n * (factorial(n - 1)));
}
