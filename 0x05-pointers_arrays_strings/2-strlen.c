#include "main.h"
/*
 * _strlen - calculates the size of a string
 * @s: pointer to a string
 *
 * return : the size of the string
 */

int _strlen(char *s)
{
	int i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
