#include "main.h"

/**
 * print_line - draw a straight line in the terminal
 * @n: The number of times the character _ should be printed
 * Return: Nothing!
 */

void print_line(int n)
{
	int i = 0;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
