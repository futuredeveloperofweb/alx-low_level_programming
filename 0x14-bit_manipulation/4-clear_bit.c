#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: the integer to modify
 * @index:  is the index, starting from 0 of the bit you want to set
 * Return: 1 on success, -1 otherwize
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	if (*n & 1l << index)
		*n = *n ^ (1L << index);
	return (1);
}
