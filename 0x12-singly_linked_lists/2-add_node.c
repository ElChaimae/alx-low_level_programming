#include "lists.h"
#include <stdio.h>
#include <strings.h>

/**
 * _strlen - function that returns the length of a string.
 * @s : s is a character
 * Return: value is i
 */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * add_node - add not at the start
 * @head: pointer to a list_t
 * @str: node content
 *
 * Return: pointer to the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t new_node = malloc(sizeof(list_t));

	new_node->str = strdup(str);
	new_node->next = *head;
	new_node->len = _strlen(str);
	*head = new_node;

	return (new_node);
}
