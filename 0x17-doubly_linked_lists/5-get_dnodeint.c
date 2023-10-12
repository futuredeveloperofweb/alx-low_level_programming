#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: a pointer to the doubly linked list
 * @index: is the index of the node, starting from 0
 * Return: returns the nth node,  return NULL if the node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int i;

	for (i = 0; current != NULL; i++)
	{
		if (i == index)
			return (current);
		current = current->next;
	}
	return (NULL);
}
