#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: the string to be printed between the strings
 * @n: is the number of strings passed to the function
 * Return: Nothings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n - 1; i++)
	{
		if (va_arg(ap, char) == NULL)
			printf("nil%s", separator);
		printf("%s%s", va_arg(ap, char), separator);
		
