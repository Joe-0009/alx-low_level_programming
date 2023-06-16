#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n,m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	/* my code */
	m = n%10 ;
	if ( m >= 5 )
	{
		printf("Last digit of %i is %i and is greater than 5" , n , m );
	}else if ( m == 0 ) 
	{
		printf("Last digit of %i is %i and is 0" , n , m );
	}else if ( m <= 0 && m != 0 ) 
	{
		printf("Last digit of %i is %i and is less than 6 and not 0" , n , m );
	}


	return (0);
}
