#include "search_algos.h"

/**
  * func - a search function
  * @array: A pointer to the first element of the [sub]array to search.
  * @l: The starting index of the [sub]array to search.
  * @r: The ending index of the [sub]array to search.
  * @value: The value to search for.
  * Return: -1 If value is not present in array or if array is NULL
  */
int func(int *array, size_t l, size_t r, int value)
{
	size_t i;

	if (r < l)
		return (-1);

	printf("Searching in array: ");
	for (i = l; i < r; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);

	i = l + (r - l) / 2;
	if (array[i] == value && (i == l || array[i - 1] != value))
		return (i);
	if (array[i] >= value)
		return (func(array, l, i, value));
	return (func(array, i + 1, r, value));
}

/**
  * advanced_binary - searches for a value in a sorted array of integers.
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: -1 If value is not present in array or if array is NULL
  */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (func(array, 0, size - 1, value));
}
