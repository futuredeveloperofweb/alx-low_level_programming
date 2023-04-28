#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: listint_t pointer
 * @n: constant int
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_head = malloc(sizeof(listint_t));
	listint_t *node = *head;

	if (!head || !new_head)
		return (NULL);

	if (n)
	{
		new_head->n = n;
		if (!new_head->n)
		{
			free(new_head);
			return (NULL);
		}
	}
	if (node)
	{
		while (node->next)
			node = node->next;
		node->next = new_head;
	}
	else
		*head = new_head;

	return (new_head);
}
