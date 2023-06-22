/**
 * _isupper - cheks if its upercase
 *
 * @c: input for alphabet
 *
 * Return: 1 if its uppercase, 0 if not
 *
 */

int _isupper(int c)
{
	if (65 >= c && 90 <= c)
		return (1);
	else
		return (0);
}
