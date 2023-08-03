#include "main.h"

/*
 *
 * get_bit - Returns a value of a given index
 * 
 * @n: Number to check the value
 * @index: s the index, starting from 0 of the bit you want to get
 *
 * Return: value at given index or -1 if an error occours
 *
 */


int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8))
		return (-1);

	n = n >> index;
	return ((n & 1));
}
