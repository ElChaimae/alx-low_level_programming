#include "main.h"

/**
 * _strncpy - it copies a string.
 * @dest: destination string
 * @src: source string
 * @n: number of characters
 *
 * Return: pointer to resulting string
 */

char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
int l = 0;
int m = 0;

while (dest[l] != '\0')
	l++;
while (src[m] != '\0')
	m++;

for (i = 0; i < n; i++)
{
if (i < m)
	dest[i] = src[i];
else
	dest[i] = '\0';
}
dest[l] = '\0';
return (dest);
}

