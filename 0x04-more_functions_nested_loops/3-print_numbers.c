#include "main.h"

/**
 * print_numbers - Prints the numbers form 0 to 9
 * Return: Nothing!
 */

void print_numbers(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
		_putchar(c);
	_putchar('\n');
}
