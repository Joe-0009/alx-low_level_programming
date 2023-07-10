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

	if (s1 == NULL || s2 == NULL)
		return(NULL);

	while (s1[i] != '\0')
		i++;
	
	while (s2[j] != '\0')
		j++;

	s3 = (char *)malloc(2 + (sizeof(int) * (i + j)));

	for (k = 0; k < i; k++)
	{
		s3[k] = s1[k];
	}

	s3[k] = ' ';
	k++;

	while (k < (i + j))
	{
		s3[k] = *s2;
		k++;
		s2++;
	}

	return (s3);
}
