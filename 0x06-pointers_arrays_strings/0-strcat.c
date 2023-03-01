#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @dest: destination string.
 * @src: source string.
 *
 * Return: pointer to concatenated string.
 */

char *_strcat(char *dest, char *src)
{
int i, j;
int l = _strlen(dest);
for (i = l, j = 0; i < l + _strlen(src), j < _strlen(src); i++, j++)
{
dest[i] = src[j];
}
dest[i] = '\0';
return (dest);
}

/**
 * _strlen - calculates the size of a string
 * @s: pointer to a string
 *
 * Description: takes string and returns its length
 * Return: the size of the string
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
