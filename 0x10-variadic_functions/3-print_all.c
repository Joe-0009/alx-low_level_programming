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
/**
 * print_all - a function that prints anything
 *
 * @format: A string of character representing
 *          the argument types
 *
 * Description: If any argument not of type char,
 *              int, float or char * is ignored
 *
 * Return: nothing
*/
void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0, j = 0;
	char *separator = "";
	fun_pr funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(ap, format);

	while (format && format[i])
	{
		j = 0;
		while (j < 4 && (format[i] != *(funcs[j].sym)))
			j++;
		if (j < 4)
		{
			printf("%s", separator);
			funcs[j].print_func(ap);
			separator = ", ";
		}
		i++;
	}
	printf("\n");

	va_end(ap);
}

