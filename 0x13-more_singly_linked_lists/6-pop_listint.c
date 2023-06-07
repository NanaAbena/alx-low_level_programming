#include "lists.h"

/**
 * pop_listint - Deletes the head node
 * @head: Double pointer
 *
 * Return: head node’s data (n)
 * if the linked list is empty return 0
 */
int pop_listint(listint_t **head)
{
	int n_hold;
	listint_t *rest;

	if (head == NULL || *head == NULL)
		return (0);

	rest = (*head)->next;
	n_hold = (*head)->n;
	free(*head);
	*head = rest;

	return (n_hold);
}
