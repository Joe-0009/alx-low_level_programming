#include "variadic_functions.h"

/**
 * pr_char - print a char
 *
 * @ls: a list of argument pointing
 *      to the character to be printed
 *
 * Return: nothing
*/

void pr_char(va_list ls)
{
	char c;

	c = va_arg(ls, int);
	printf("%c", c);
}
/**
 * pr_int - print an integer
 *
 * @ls: a list of argument pointing
 *      to the character to be printed
 *
 * Return: nothing
*/

void pr_int(va_list ls)
{
	int ar;

	ar = va_arg(ls, ar);
	printf("%d", ar);
}

/**
 * pr_float - print a float
 *
 * @ls: a list of argument pointing
 *      to the character to be printed
 *
 * Return: nothing
*/

void pr_float(va_list ls)
{
	float ar;

	ar = var_ar(ls, double);
	printf("%f", ar);
}

/**
 * pr_string - print a string
 *
 * @ls: a list of argument pointing
 *      to the character to be printed
 *
 * Return: nothing
*/

void pr_string(va_list ls)
{
	char *str;

	str = va_arg(ls, char *);
	if (str)
		printf("%s", str);
	else
		printf("%s", (nil));
}

void print_all(const char * const format, ...)
{
	int i = 0;
	int j = 0;
	va_list ls;
	
	fun_pr printer_functions[] = {

	{'c', pr_char},
	{'i', pr_int},
	{'f', pr_float},
	{'s', pr_string},
	};


	va_start(ls, format);
	while (format && format[i])
	{
		while (j < 4)
		{

			if (format[i] == printer_functions[j].sym)
			{
				printer_functions[j].print_func(ls);
				if (format[i + 1] != NULL)
				{
					printf(", ");
				}
			}	
			j++;
		}
	i++;
	}

	va_end(ls);
	printf("\n);

}
