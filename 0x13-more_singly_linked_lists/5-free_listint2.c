#include "lists.h"

/**
 * free_listint2 - Frees a list
 * @head: Double pointer
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *release;

	if (head == NULL || *head == NULL)
	{
		return;
	}

	while (*head != NULL)
	{
		release = *head;
		*head = (*(head))->next;
		free(release);
	}

	head = NULL;
}
