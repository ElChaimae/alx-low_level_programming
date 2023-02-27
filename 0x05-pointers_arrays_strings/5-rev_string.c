#include "main.h"

/**
 * rev_string - reverses a string
 * @s: pointer to string
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i = _strlen(s);
	int j = 0;
	char s1[i];

	i--;
	for (; i >= 0 ; i--)
	{
		s1[j] = s[i];
		j++;
	}

	for (j = 0; j < _strlen(s); j++)
		s[j] = s1[j];
}
