#include "lists.h"

/**
 * insert_dnodeint_at_index - a function that inserts a new node at a given position
 * @h: a apointer to the doubly linked list
 * idx: the index where to add the new node
 * @n: the data to put in the new node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint *new = malloc(sizeof(dlistint_t)), *current;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);
	if (new == NULL)
		return (NULL);

	current = *h;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	for (; index != 0; index--)
	{
		current = current->next;
		if (current == NULL)
			return (NULL);
	}
	if (current->next == NULL)
		return (add_dnodeint_end(h, n));
	new->n = n;
	new->prev = current;
	new->next->prev = new;
	current->next = new;
	return (new);
}
