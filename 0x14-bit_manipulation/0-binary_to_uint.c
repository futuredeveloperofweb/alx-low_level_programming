#include "main.h"

/**
 * binary_to_uint - convert a binary to an integer
 * @a: a pointer to the given string
 * Return: the converted integer, 0 otherwize
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;

	if (!b)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] != 48 && b[i] != 49)
			return (0);

