#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers.
 * @min: int
 * @max: int
 * Return: pointer to int
 */
int *array_range(int min, int max)
{
	int i, len;
	int *a;

	len = max - min + 1;
	if (min > max)
		return (NULL);
	a = malloc(sizeof(int) * len);

	if (a == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		a[i] = min++;
	return (a);
}
