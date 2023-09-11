#include <stdio.h>
/**
 * main - prints the name of file it was compiled from
 *
 * it takes no arguments
 *
 * Return: 0 in success
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
