#include "main.h"

/**
 * print_most_numbers - Prints numbers form 0 to 9 excepte 2 and 4
 * Return: Nothing!
 */

void print_most_numbers(void)
{
	int c = '0';

	while (c <= '9')
	{
		if (c == '2' || c == '4')
			c++;
		else
		{
			_putchar(c);
			c++;
		}
	}
	_putchar('\n');
}
