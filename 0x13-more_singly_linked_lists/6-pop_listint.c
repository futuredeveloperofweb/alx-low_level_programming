#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 *  and returns the head node’s data (n).
 *  @head: listint_t pointer
 *  Return: int, if the linked list is empty return 0
 */

int pop_listint(listint_t **head)
{
	listint_t *node;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	node = (*head)->next;
	free(*head);
	*head = node;
	return (num);
}
