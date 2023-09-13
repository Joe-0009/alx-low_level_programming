#include "calc.h"

/**
 * get_op_func - get ops function pointer of type char array
 *               that accepts two inputs of int data type
 *
 * @s: a character pointer pointing to a symbol from the program argument
 *
 * Return: one of the operator functions to perform calculations
*/






int (*get_op_func(char *s))(int, int)
{
	int i;

	op_t ops = {
		{'+', op_add},
		{'-', op_sub},
		{'*', op_mul},
		{'/', op_div},
		{'%', op_mod},
		{NULL, NULL}
	};

	for (i = 0; i < 5; i++)
	{
		if (*ops[i].op == *s)
		{
			return (ops[i].f);
		}
	}
	return (NULL);
}
