#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 * @head: Pointer to a pointer to the head node of the list.
 * @n: Value of the integer to be added to the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *traverse;

	node = malloc(sizeof(*node));
	if (node)
		node->n = n;
	if (*head == NULL)
	{
		*head = node;
		return (node);
	}
	traverse = *head;
	while (traverse->next)
		traverse = traverse->next;
	traverse->next = node;
	return (node);
}

