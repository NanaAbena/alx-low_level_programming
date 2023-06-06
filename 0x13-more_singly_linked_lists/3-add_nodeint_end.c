#include "lists.h"

/**
 * add_nodeint_end - Adds new node
 * @head: Double pointer
 * @n: constant integer
 *
 * Return: the address of the new element
 * or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;

	while (*head != NULL)
	{
		head = &(*head)->next;
	}
	*head = new_node;

	return (new_node);
}
