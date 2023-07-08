#include "main.h"

/**
 * clear_bit - clears the bit
 * @n:  number
 * @ind: the bit
 * Return: 1 on success, -1 on error
 */
int clear_bit(unsigned long int *n, unsigned int ind)
{
	if (ind >= sizeof(n) * 8)
		return (-1);
	if (*n & 1L << ind)
		*n ^= 1L << ind;
	return (1);
}
