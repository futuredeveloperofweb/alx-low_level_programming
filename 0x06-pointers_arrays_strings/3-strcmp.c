#include "main.h"

/**
 * _strcmp - compares two strings.
 * @s1: first string.
 * @s2: second string.
 * Return: 1 if they are equal 0 otherwise
 */

int _strcmp(char *s1, char *s2)
{
	int i, j, a;

	for (i = 0, j = 0; s1[i] != '\0' && s2[j] != '\0'; i++, j++)
	{
		if (s1[i] == s2[j])
			a = 1;
		else
		{
			a = 0;
			return (a);
		}
	}
	return (a);
}
