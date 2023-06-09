#include "main.h"

/**
 * print_binary - display a number in a binary way
 * @n: the number to print
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int bit = sizeof(n) * 8, print = 0;

	while (bit)
	{
		if (n & 1L << --bit)
		{
			_putchar('1');
			print++;
		}
		else if (print)
			_putchar('0');
	}
	if (!print)
		_putchar('0');
}

