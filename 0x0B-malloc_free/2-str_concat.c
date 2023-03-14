#include "main.h"
#include <stdlib.h>


/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to array
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, l;
	char *s;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	l = i + j;
	s = malloc(sizeof(*s) * (l + 2));
	if (s == NULL)
		return (NULL);
	while (i >= 0)
	{
		s[i] = s1[i];
		i--;
	}

	while (j >= 0)
	{
		s[l] = s2[j];
		j--;
		l--;
	}
	return (s);
}
