#include "main.h"

/**
 * _puts - prints a string, followed by a new line,
 * @str: the pointer to point on the string
 * Return: Nothing!
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
		_putchar(str[i]);
	}
	_putchar('\n');
}
