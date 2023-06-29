/**
 * _strcmp - compares 2 strings
 *
 * @s1: first string
 * @s2: second string
 *
 */

int _strcmp(char *s1, char *s2)
{
	int r ;

	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			r = *s1 - *s2;
			break;
		}
		else
		{
			r = *s1 - *s2;
		}
		s1++;
		s2++;
	}
	return (r);
}
