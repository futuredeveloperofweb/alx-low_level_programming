#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in a sorted array of integers
 * using the Jump search algorithm
 * @array: is a pointer to the first element of the array to search
 * @size: is the number of elements in array
 * @value:  is the value to search for
 * Return: -1 If value is not present in array or if array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i, j, step;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);
	for (i = j = 0; j < size && array[j] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", j, array[j]);
		i = j;
		j += step;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", i, j);
	j = j < size - 1 ? j : size - 1;
	for (; i < j && array[i] < value; i++)
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	return (array[i] == value ? (int)i : -1);
}
