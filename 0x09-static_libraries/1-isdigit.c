#include "main.h"

/**
 * _isdigit - check for a value if it is a number
 * @c: the value to be checked
 * Return: 1 if c is a digit or 0 otherwize
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
