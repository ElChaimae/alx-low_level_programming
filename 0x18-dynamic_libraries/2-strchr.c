#include <stdio.h>
#include <string.h>

/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character to be located
 *
 * Return: character pointer or NULL
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
			return (s + i);
		i++;
	}
	if (*(s + i) == c)
		return (s + i);
	return (NULL);
}
