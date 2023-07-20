#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - a function that prints strings, followed by a new line.
 *
 * @separator: is the string to be printed between the strings
 * @n: is the number of strings passed to the function
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int str;

	va_start(ap, n);

	for (str = 0; str < n; str++)
	{
		if (va_arg(ap, n) == NULL)
		{
			printf("nil");
			exit(98);
		}
		printf("%s", va_arg(ap, n));

		if (separator && str == n - 1)
			printf("%s", separator);
	}

	va_end(ap, n);
	printf("\n");
}
