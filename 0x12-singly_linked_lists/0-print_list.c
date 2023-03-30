#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: constant  list_t structure
 *
 * Return: the length of the list
 */
size_t print_list(const list_t *h)
{
	const list_t *node = h;
	size_t len = 0;

	do {
		if (!node->str)
			printf("[0] (nil)");
		else
			printf("%s\n", node->str);
		node = node->next;
		len++;
	} while (node);

	return (len);
}

