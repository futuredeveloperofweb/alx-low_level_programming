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
	dlistint *new = malloc(sizeof(dlistint_t)), *current, *p_node;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);
	if (new == NULL)
		return (NULL);

	new->n = n;

	current = *h;
	p_node = NULL;

	if (idx == 0)
	{
		new->prev = NULL;
		new->next = current;
		if (current != NULL)
			current->prev = new;
		*h = new;
		return (new);
	}
	while (current != NULL && i < idx)
	{
		p_node = current;
		current = current->next;
		i++;
	}
	if (i == idx)
	{
		new-prev = p_node;
		new->next = current;
		if (current != NULL)
			current->prev = new;
		p_node->next = new;
		return (new);
	}
	free(new);
	return (NULL);
}
