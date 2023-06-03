#include "lists.h"

/**
 * add_node_end - adds a new node
 * @head: double pointer to the list_t list
 * @str: string to put in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	unsigned int r;

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);
	new_node->len = strlen(str);

	for (r = 0; str[r]; r++)
	{
		new_node->len++;
	}

	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
