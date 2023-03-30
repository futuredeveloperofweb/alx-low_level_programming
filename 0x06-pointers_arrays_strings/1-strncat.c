#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * @dest: the string to concatenate to
 * @src: the string to concatenate from
 * @n: the number of concatenation
 * Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int destlen = 0, srclen = 0;
	int i;

	for (i = 0; dest[i] != '\0'; i++)
		destlen++;
	for (i = 0; src[i] != '\0'; i++)
		srclen++;
	for (i = 0; i < n; i++)
	{
		dest[destlen + i] = src[i];
	}
	return (dest);
}
