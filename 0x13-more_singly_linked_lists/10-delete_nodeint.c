#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Deletes the node
 * at index of a listint_t linked list.
 * @head: Pointer to a pointer to the head node of the list.
 * @index: Index of the node that should be deleted. Index starts at 0.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		listint_t *temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	else
		return (delete_nodeint_at_index(&(*head)->next, index - 1));

}

