#include "main.h"

/**
 * get_endianness - return the enddianness of the system
 * Return: 0 on success, 1 on fail
 */
int get_endianness(void)
{
	unsigned long int x = 1;

	return (*(char *)&x);
}
