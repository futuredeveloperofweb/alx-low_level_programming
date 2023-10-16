#include "main.h"
/**
 * _isupper - Checks for uppercase character
 * @c: The value to be checked
 * Return: 1 in it is uppercase or 0 otherwize
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
