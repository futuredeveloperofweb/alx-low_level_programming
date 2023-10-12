#include "lists.h"

/**
 * print_dlistint -  prints all the elements of a dlistint_t list
 * @h: a pointer to the doubly linked list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t cmpt = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		cmpt++;
		current = current->next;
	}
	return (cmpt);
}
