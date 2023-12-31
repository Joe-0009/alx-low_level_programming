/**
 * _isdigit - checks if input is digit between 0 - 9
 *
 * @c: input for numbers
 *
 * Return: 1 if its a number, 0 if not
 *
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
