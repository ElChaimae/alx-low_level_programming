#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list.
 * @head: Pointer to a pointer to the head node of the list.
 * @n: Value of the integer to be added to the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(*node));
	if (node)
	{
		node->n = n;
		node->next = *head;
		*head = node;
	}
	return (node);
}

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

	if (idx != 0 && (head == NULL || *head == NULL || (*head)->next == NULL))
		return (NULL);

	if (idx == 0 && (head == NULL || *head == NULL))
	{
		node = add_nodeint(head, n);
		return (node);
	}

	if (idx == 1)
	{
		node = malloc(sizeof(*node));
		if (node == NULL)
			return (NULL);

		node->n = n;
		node->next = (*head)->next;
		(*head)->next = node;

		return (node);
	}

	return (insert_nodeint_at_index(&((*head)->next), --idx, n));
}
