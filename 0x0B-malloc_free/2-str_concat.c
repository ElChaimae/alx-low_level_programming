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
	int i = 0, j = 0, l = 0;
	char *s;

	if (s1 != NULL)
	{
	for (i = 0; s1[i] != '\0'; i++)
		;
	}

	if (s2 != NULL)
	{
	for (j = 0; s2[j] != '\0'; j++)
		;
	}
	l = i + j;
	s = malloc(sizeof(*s) * (l + 1));
	if (s == NULL)
		return (NULL);
	if (s1 == NULL && s2 == NULL)
		s[0] = '\0';
	if (s1 != NULL)
	{
	while (i >= 0)
	{
		s[i] = s1[i];
		i--;
	}
	}

	if (s2 != NULL)
	{
	while (j >= 0)
	{
		s[l] = s2[j];
		j--;
		l--;
	}
	}

	return (s);
}
