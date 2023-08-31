#include "main.h"

/**
 * binary_to_uint - convert a binary to an integer
 * @str: a pointer to the given string
 * Return: the converted integer, 0 otherwize
 */
unsigned int binary_to_uint(const char *str)
{
	int i = 0;
	unsigned int x = 0;

	if (!str)
		return (0);
	while (str[i])
	{
		if (str[i] != 48 && str[i] != 49)
			return (0);
		x = x * 2 + (str[i] - '0');
		i++;
	}
	return (x);
}
