#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: the string to reverse
 * @n: the number of elements of the array
 * Return: Nothing!
 */

void reverse_array(int *a, int n)
{
	int i, j;
	int b[100];

	for (i = n - 1, j = 0; i >= 0 && j < n; i--, j++)
		b[j] = a[i];
	for (i = 0; i < n; i++)
		a[i] = b[i];
}
