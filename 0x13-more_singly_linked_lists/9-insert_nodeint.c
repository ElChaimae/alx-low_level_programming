#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - Inserts a new node
 * at a given position in a linked list.
 * @head: Pointer to a pointer to the first node of the list.
 * @idx: Index of the list where the new node should be added.
 * @n: Value to be stored in the new node.
 *
 * Return: Address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node;

	if (head == NULL)
		return (NULL);
	if (idx == 1)
	{
		node = malloc(sizeof(node));
		if (node)
		{
			node->n = n;
			node->next = (*head)->next;
			(*head)->next = node;
		}
		return (node);
	}
	return (insert_nodeint_at_index(&((*head)->next), --idx, n));
}

