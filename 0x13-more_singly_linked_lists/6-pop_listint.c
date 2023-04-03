#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - deletes the head node of a listint_t linked list, and returns
 *               the head node’s data (n).
 * @head: pointer to pointer to the head node of the list
 *
 * Return: the head node's data (n), or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *next;
	int n;

	n = 0;
	if (head != NULL && *head != NULL)
	{
		next = (*head)->next;
		n = (*head)->n;
		free(*head);
		*head = next;
	}
	return (n);
}
