#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index of a dlistint_t linked list
 * @head: a pointer to the doubly linked list
 * index: th position of the node to delete
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	current = *head;
	for (; index != 0; index--)
	{
		if (current == NULL)
			return (-1);
		current = current->next;
	}
	if (current == *head)
	{
		*head = current->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		current->prev->next = current->next;
		if (current->next != NULL)
			current->next->prev = current->prev;
	}
	free(current);
	return (1);
}