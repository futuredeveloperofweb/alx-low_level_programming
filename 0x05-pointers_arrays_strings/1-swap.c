#include "main.h"
/**
 * swap_int - swaps the values of two integers.
 * @a: first int to swap
 * @b: second int to swap
 * return: Nothing!
 */

void swap_int(int *a, int *b)
{
	int tamp = *a;

	*a = *b;
	*b = tamp;
}
