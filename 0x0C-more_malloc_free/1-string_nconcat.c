#include "main.h"
#include <stdlib.h>
/**
 * _strlen - calculate the length of a string
 * @s: string
 * Return: int
 */
int _strlen(char *s)
{
	int nb = 0;

	for (; s[nb] != '\0'; nb++)
	;
	return (nb);
}
/**
 * string_nconcat - concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * @n: unsigned int
 * Return: char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int S1, S2, i, j;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	S1 = _strlen(s1);
	S2 = _strlen(s2);
	s = malloc(S1 + n + 1);
	if (s == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		s[i] = s1[i];
	if (n >= S2)
	{
		for (j = 0; j < S2; j++)
		{
			s[i] = s2[j];
			i++;
		}
	}
	else
	{
		for (j = 0; j < n; j++)
		{
			s[i] = s2[j];
			i++;
		}
	}
	s[i] = '\0';
	return (s);
}
