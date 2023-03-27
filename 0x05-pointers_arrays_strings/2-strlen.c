#include "main.h"
/**
 * _strlen - returns the length of a string.
 * @s: the pointer we use to point on the string
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
		count++;
	return (count);
}
