#include "main.h"

/**
 * set_bit - sets the bit
 * @n: numberto index
 * @ind: the bit
 * Return: 1 on success, -1 on error
 */
int set_bit(unsigned long int *n, unsigned int ind)
{
	if (ind >= sizeof(n) * 8)
		return (-1);
	return (!!(*n |= 1L << ind));
}
