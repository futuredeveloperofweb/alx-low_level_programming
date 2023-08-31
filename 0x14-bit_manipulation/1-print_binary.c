#include "main.h"

/**
 * print_binary - convert an integer to a binary
 * @ing: the number to convert
 * Return: nothing
 */
void print_binary(unsigned long int ing)
{
	int str = sizeof(ing) * 8;
	int p = 0;

	while (str)
	{
		if (ing & 1L << --str)
		{
			_putchar('1');
			p++;
		}
		else if (p)
			_putchar('0');
	}
	if (!p)
		_putchar('0');
}
