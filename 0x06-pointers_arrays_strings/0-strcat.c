#include "main.h"
/**
 * _strcat - appends the src string to the dest string
 * @dest: the string to append to
 * @src: the appended string
 * Return: pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int destlen = 0;
	int sourselen = 0;
	int i;

	for (i = 0; dest[i] != '\0'; i++)
		destlen++;
	for (i = 0; src[i] != '\0'; i++)
		sourselen++;
	for (i = 0; i <= sourselen; i++)
	{
		dest[destlen + i] = src[i];
	}
	return (dest);
}
