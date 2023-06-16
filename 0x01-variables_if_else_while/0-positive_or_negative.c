#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/** 
 * main - betty style doc
 * 
 * Description : for function main that prints 
 * 
 * Return: Always 0 (Success)  
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	/*My code*/	
	if (n > 0)
	{
		printf("%i is positive\n", n);
	} else if (n == 0)
	{
		printf("%i is zero\n", n);
	} else
	{
		printf("%i is negative\n", n);
	}
	return (0);
}
