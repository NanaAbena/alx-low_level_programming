#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to the list_t list to print
 *
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *node;

	if (h == NULL)
	{
		return (0);
	}
	for (node = h; node != NULL; node = node->next)
	{
		if (node->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", node->len, node->str);
		}
		count++;
	}

	return (count);
}
