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
int l = 0;
int m = 0;

while (dest[l] != '\0')
	l++;

while (src[m] != '\0')
	m++;

for (i = l, j = 0; i < l + m && j < m; i++, j++)
{
	dest[i] = src[j];
}
dest[i] = '\0';

return (dest);
}

