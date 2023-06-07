#include "lists.h"

/**
 * sum_listint - Returns the sum of all data
 * @head: pointer to head
 *
 * Return: if the list is empty, return 0
 */


int sum_listint(listint_t *head)
{
	int sum = 0;

	for (sum = 0; head != NULL; head = head->next)
	{
		sum += head->n;
	}

	return (sum);
}
