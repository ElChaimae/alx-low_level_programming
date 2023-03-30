#include "lists.h"
#include <stdio.h>

/**
 * list_len - calculates the number of elements in a linked list
 * @h: constant  list_t structure
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h)
	{
		h = h->next;
		len++;
	}

	return (len);
}
