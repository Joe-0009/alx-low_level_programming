#include <stdlib.h>
#include <stdio.h>

/**
 * main - a program that multiplies two numbers
 *
 * @argc: holds the number of arguments passed
 * @argv: array pointer that holds the arguments passed
 *
 * Return: Always 0
*/

int main(int argc, char *argv[])
{
	int i, j, m;

	if (argc < 2 )
		return (1);

	i = atoi(argv[1]);
	j = atoi(argv[2]);
	m = i * j;

	printf("%d\n", m);
	return (0);
}
