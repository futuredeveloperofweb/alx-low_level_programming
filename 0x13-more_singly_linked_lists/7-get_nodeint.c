#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: listiint_t pointer
 * @index: unsigned int
 * Return: listint_t, otherwize NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = head;
	size_t i = 0;

	while (node && i < index)
	{
		i++;
		node = node->next;
	}
	return (node ? node : NULL);
}

