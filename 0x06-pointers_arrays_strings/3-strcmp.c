#include "main.h"

/**
 * _strcmp - it compares two strings.
 * @s1: 1st string
 * @s2: 2nd string
 *
 * Return: 0 if equal, -15 or 15 otherwise
 */

int _strcmp(char *s1, char *s2)
{
int i = 0;
while (s1[i] != '\0' && s2[i] != '\0')
{
	if (s1[i] == s2[i])
		i++;
	else if (s1[i] > s2[i])
		return (15);
	else
		return (-15);
}
	return (0);
}

