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
	dlistint_t *current = *head;
	dlistint_t *new = malloc(sizeof(dlistint_t));

	unsigned int i = 0;

	new-n = n;
	new->next = NULL;

	while (current != NULL)
	{
		if (i == idx)
		{
			current->prev->next = new;
			new->next = current;
			return (new);
		}
	}
	return (NULL);
}
