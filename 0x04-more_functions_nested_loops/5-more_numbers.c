#include"main.h"

/**
 * more_numbers - print numbers from 0 to 14 , 10 times
 */

void more_numbers(void)
{
	int i;
	int j;
	int k;

	for (i = 0 ; i <= 9 ; i++)
	{
		for (j = 0 ; j < 14 ; j++)
		{
			k = j;
			if (j > 9)
			{
				k = j / 10;
				_putchar('0' + k);
				k = j % 10;
			}
			_putchar('0' + k);
		}
		_putchar('\n');
	}
}
