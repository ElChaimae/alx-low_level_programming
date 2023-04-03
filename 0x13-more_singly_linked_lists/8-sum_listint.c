#include "lists.h"


/**
 * sum_listint - Returns the sum of all the data (n) of a listint_t linked list
 * @head: Pointer to the head node of the linked list
 *
 * Return: The sum of all the data (n) of the linked list,
 *         or 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	if (!head)
		return (0);
	return (head->n + sum_listint(head->next));
}

