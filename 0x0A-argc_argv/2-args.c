#include <stdlib.h>
#include <stdio.h>

/**
 * main - a program that prints the arguments
 *        passed into it
 *
 * @argc: holds the number of arguments passed
 * @argv: array pointer that holds the arguments passed
 *
 * Return: 0
*/

int main(int argc, char *argv[])
{
	int i = 1;

	while (i <= argc)
	{
		printf("%s\n",argv[i]);
		i++;
	}
	return (0);
}
