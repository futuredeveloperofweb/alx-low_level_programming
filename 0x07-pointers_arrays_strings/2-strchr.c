#include "main.h"
#include <stddef.h>

/**
 * _strchr -  a function that locates a character in a string
 * @s: the string
 * @c: the character to cherche
 * Return: a pointer to the first occurrence of the character
 * c in the string s, or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	int i = 0;
	char *p;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			p = &s[i];
		}
		else
			return (NULL);
	}
	return (p);
}
