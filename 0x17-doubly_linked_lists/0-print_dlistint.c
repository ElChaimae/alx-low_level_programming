#include "lists.h"

/**
 * print_dlistint - Prints all elements of a dlistint_t linked list.
 * @h: A pointer to the head of the doubly linked list.
 *
 * Return: The number of nodes in the linked list.
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t c = 0;
	const dlistint_t *node = h;

	while (node != NULL)
	{
		printf("%d\n", node->n);
		c++;
		node = node->next;
	}
	return (c);
}
