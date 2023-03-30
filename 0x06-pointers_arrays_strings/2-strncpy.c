#include "main.h"

/**
 * _strncpy - copy a string
 * @dest: string to concatenate to
 * @src: string to concatenate from
 * @n: number of charecter to copy
 * Return: the copied string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
