#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: the integer to modify
 * @index: is the index, starting from 0 of the bit you want to set
 * Return: 1 on success, -1 on fail
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	*n |= 1L << index;
	return (!!(*n & 1L << index));
}
