#include "main.h"

/**
 * more_numbers - Prints 10 times the numbers form 0 to 14
 * Return: Nothing!
 */

void more_numbers(void)
{
	int c = 0, i = 0;

	while (i < 10)
	{
		for (c = 0; c <= 14; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
