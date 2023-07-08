#include "main.h"

/**
 * flip_bits - return number of bits that transform one number to another
 * @n: number 1
 * @m: number 2
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int rval = n ^ m;
	unsigned int count = 0;

	while (rval)
	{
		if (rval & 1ul)
			count++;
		rval = rval >> 1;
	}
	return (count);
}
