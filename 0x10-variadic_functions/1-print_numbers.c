#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: constant char
 * @n: unsigned constant int
 * Return: Nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n - 1; i++)
	{
		printf("%d%s", va_arg(ap, int), separator);
	}
	printf("%d", va_arg(ap, int));
	printf("\n");
	va_end(ap);
}
