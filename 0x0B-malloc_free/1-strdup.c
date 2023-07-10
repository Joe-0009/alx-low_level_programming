#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly allocated space in memory
 *
 * @str: string input
 *
 * Return:  a pointer to a newly allocated space in memory
 */

char *_strdup(char *str)
{
	int i = 0;
	int j = 0;
	char *p;
	
	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;

	p = (char *)malloc(i * sizeof(char));
	
	for (j = 0; j < i; j++)
	{
		p[j] = str[j];
	}

	free(p);
}
