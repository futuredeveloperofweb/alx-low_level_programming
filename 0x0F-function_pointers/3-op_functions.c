#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
/**
 * op_add - Return the sum of tow numbs
 * @a: int
 * @b: int
 * Return: the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - the defirence of two numbers
 * @a: int
 * @b: int
 * Return: the deference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - return the multiplication of a and b
 * @a: int
 * @b: int
 * Return: the multiplication of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - the divition of a and b
 * @a: int
 * @b: int
 * Return: the divition of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - the modulo of a and b
 * @a: int
 * @b: int
 * Return: the modulo of a and b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
