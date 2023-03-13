#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: string to be copied
 *
 * Return: pointer to array
 */

char *_strdup(char *str)
{
	char *s;
	int i;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;
	i++;
	s = malloc(sizeof(*s) * i);
	if (s == NULL)
		return (NULL);
	while (i >= 0)
	{
		s[i] = str[i];
		i--;
	}

	return (s);
}
