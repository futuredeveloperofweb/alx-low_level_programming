#include "search_algos.h"

/**
  * b_search - it's a binary search function
  * @array: A pointer to the first element of the array to search.
  * @l: The starting index of the [sub]array to search.
  * @r: The ending index of the [sub]array to search.
  * @value: The value to search
  * Return: -1 if value is not present in array or if array
  */
int b_search(int *array, size_t l, size_t r, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	while (r >= l)
	{
		printf("Searching in array: ");
		for (i = l; i < r; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = l + (r - l) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			r = i - 1;
		else
			l = i + 1;
	}

	return (-1);
}

/**
  * exponential_search - searches for a value in a sorted array of
  * integers using the Binary search algorithm
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: -1 if value is not present in array or if array is NULL
  */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 0, right;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (i = 1; i < size && array[i] <= value; i = i * 2)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}

	right = i < size ? i : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, right);
	return (b_search(array, i / 2, right, value));
}
