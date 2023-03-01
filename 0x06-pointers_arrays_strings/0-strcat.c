#include "main.h"
#include <string.h>

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
int l = strlen(dest);
for (i = l, j = 0; i < l + strlen(src), j < strlen(src); i++, j++)
{
dest[i] = src[j];
}
dest[i] = '\0';
return (dest);
}
