#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a list
 * @head: Head of the list
 * @index: Position to get
 *
 * Return: Address of the element at the given index
 * or NULL if not found
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int note;
	listint_t *new;

	note = 0;
	new = head;

	while (new != NULL)
	{
		if (note == index)
			return (new);

		new = new->next;
		note++;
	}

	return (NULL);

}
