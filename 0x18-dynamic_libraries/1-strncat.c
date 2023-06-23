#include "main.h"

/**
 * _strncat - concatenates two strings.
 * @dest: destination string.
 * @src: source string.
 * @n: number of bytes
 * Return: pointer to concatenated string.
 */

char *_strncat(char *dest, char *src, int n)
{
int i, j;
int l = 0;
int m = 0;

while (dest[l] != '\0')
	l++;

while (src[m] != '\0')
	m++;
if (n > m)
	n = m;

for (i = l, j = 0; i < l + n && j < n; i++, j++)
{
	dest[i] = src[j];
}
dest[i] = '\0';

return (dest);
}

