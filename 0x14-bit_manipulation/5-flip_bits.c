#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to
 * flip to get from one number to another.
 * @n: the integer to modify
 * @m: the new integer to look for
 * Return: the number of nb to be changed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m;
	unsigned int cmpt = 0;

	while (diff)
	{
		if (diff & 1ul)
			cmpt++;
		diff = diff >> 1;
	}
	return (cmpt);
}
