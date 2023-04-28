#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: constant listint pointer
 * Return: size_t
 */
size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	if (!h)
		return (0);
	while (h)
	{
		h = h->next;
		n++;
	}
	return (n);
}
