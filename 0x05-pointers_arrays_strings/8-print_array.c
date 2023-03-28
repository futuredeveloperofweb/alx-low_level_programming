#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array
 * @a: pointer to check
 * @n: the number of elements of the array to be printed
 * Return: Nothing!
 */

void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		if (x != n - 1)
			printf("%d, ", a[x]);
		else
			printf("%d", a[x]);
	}
	printf("\n");
}

