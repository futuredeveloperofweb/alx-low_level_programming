#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h: a pointer to the doubly linked list
 * Return: size_t
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t c = 0;

	while (current != NULL)
	{
		c++;
		current = current->next;
	}
	return (c);
}
