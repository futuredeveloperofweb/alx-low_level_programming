#include "main.h"

/**
 * binary_to_uint - converts a binary to unsigned int
 * @a: the binary num
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;


	if (!a)
		return (0);
	while (*a)
	{
		if (*a != '0' && *a != '1')
			return (0);
		n = n * 2 + (*a++ - '0');
	}
	return (n);
}
