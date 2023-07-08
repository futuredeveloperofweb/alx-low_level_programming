#include "main.h"

/**
 * get_bit - gets bit at some index
 * @n: the index
 * @ind: the bit
 * Return: the bit state or -1 on error
 */
int get_bit(unsigned long int n, unsigned int ind)
{
	if (ind >= sizeof(n) * 8)
		return (-1);
	return (n >> ind & 1);
}
