#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 * @head: A pointer to the head node of the linked list.
 * @index: The index of the node to be returned, starting at 0.
 *
 * Return: If the node exists - pointer to the nth node.
 *         If the node does not exist - NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	if (index == 0 || head == NULL)
		return (head);
	else
		return (get_nodeint_at_index(head->next, --index));
}

