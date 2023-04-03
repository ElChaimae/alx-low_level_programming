#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - Frees a listint_t list.
 * @head: Double pointer to the head node of the list.
 *
 * Return: void.
 */
void free_listint2(listint_t **head)
{
	if (*head)
	{
		free_listint2(&((*head)->next));
		free(*head);
	}
	*head = NULL;
}

