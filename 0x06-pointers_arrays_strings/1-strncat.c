#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: the string to concatenate to
 * @src: the source string to concatenate from
 * @n: the number of character to be append
 * Return: concatenated string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		continue;
	for (j = 0; src[i] != '\0' && j < n; i++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);
}
