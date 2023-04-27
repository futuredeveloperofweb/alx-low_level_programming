#include "lists.h"
#include <stdio.h>

/**
 * _strlen - returns the length of a string
 * @s: the string whose length to check
 * Return: int
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	;
	return (i);
}

/**
 * print_list - prints all the elements of a list_t list
 * @h: constant of type list_t
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		i++;
	}
	return (i);
}
