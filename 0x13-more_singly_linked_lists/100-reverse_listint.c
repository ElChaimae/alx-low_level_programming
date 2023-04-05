#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list.
 *
 * @head: Double pointer to the first node of the list.
 *
 * Return: Pointer to the first node of the reversed list.
 *         NULL if the list is empty.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current, *next;

	if (*head == NULL || (*head)->next == NULL)
		return (*head);

	current = *head;
	next = current->next;
	reverse_listint(&next);
	current->next->next = current;
	current->next = NULL;
	*head = next;

	return (next);
}

