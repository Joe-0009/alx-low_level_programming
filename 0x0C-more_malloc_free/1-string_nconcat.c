#include "main.h"

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: index
 * Return: char pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
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

	if (n <= j)
		j = n;

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

	s3[k] = '\0';

	return (s3);
}
