#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node
 * at a given index in a dlistint_t linked list.
 * @head: A pointer to a pointer to the head of the doubly linked list.
 * @index: The index of the node to delete. Index starts at 0.
 *
 * Return: 1 if the deletion succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *temp;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	current = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
		(*head)->prev = NULL;
		free(current);
		return (1);
	}

	for (i = 0; i < index && current != NULL; i++)
		current = current->next;

	if (current == NULL)
		return (-1);

	if (current->next == NULL)
	{
		current->prev->next = NULL;
		free(current);
		return (1);
	}

	temp = current->next;
	current->prev->next = temp;
	temp->prev = current->prev;
	free(current);

	return (1);
}

