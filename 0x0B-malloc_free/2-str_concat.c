#include <stdlib.h>

/**
 * str_concat -  a function that concatenates two strings
 *
 * @s1: first string input
 * @s2: secong string input
 *
 * Return:  a newly allocated space in memory
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	int k;
	char *s3;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
		i++;

	while (s2[j] != '\0')
		j++;

	s3 = (char *)malloc(1 + (sizeof(char) * (i + j)));

	if (s3 == NULL)
		return (NULL);

	for (k = 0; k < i; k++)
	{
		s3[k] = s1[k];
	}

	for (k = i; k < (i + j); k++)
	{
		s3[k] = *s2;
		s2++;
	}

	return (s3);
}

