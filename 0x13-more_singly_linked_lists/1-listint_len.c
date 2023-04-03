#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * listint_len - returns length of a linked list
 *
 * @h: list to get length of
 *
 * Return: length of list
 */
size_t listint_len(const listint_t *h)
{
	size_t num_nodes = 0;

	while (h != NULL)
	{
		num_nodes += 1;
		h = h->next;
	}

	return (num_nodes);
}
