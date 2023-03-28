#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: pointer to check
 * Return: Nothing!
 */

void puts_half(char *str)
{
	int i = 0, a;

	while (str[i] != 0)
		i++;
	if (i % 2 == 0)
	{
		for (a = i / 2; a < i; a++)
			_putchar(str[a]);
		_putchar('\n');
	}
	else
	{
		for (a = (i - 1) / 2; a <= i; a++)
			_putchar(str[a]);
		_putchar('\n');
	}
}
