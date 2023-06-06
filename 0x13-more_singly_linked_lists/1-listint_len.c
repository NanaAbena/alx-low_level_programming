#include "lists.h"

/**
 * listint_len - Returns the number of elements in a list
 * @h: pointer to head of list
 *
 * Return: Number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t node = 0;

	while (h != NULL)
	{
		node++;
		h = h->next;
	}
	return (node);
}
