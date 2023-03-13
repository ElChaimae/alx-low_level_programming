#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: array size
 * @c: char to be assigned
 *
 * Return: pointer to array
 */

char *create_array(unsigned int size, char c)
{
	char *str;

	if (size == 0)
		return (NULL);
	str = malloc(sizeof(*str) * size);
	if (str == NULL)
		return (NULL);
	while ((int) size >= 0)
	{
		str[size] = c;
		size--;
	}

	return (str);
}
