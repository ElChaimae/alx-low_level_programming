#include "main.h"

/**
 *_memset - fills the first n bytes of the memory area
 * pointed to by s with the constant byte b
 * @s: pointer to the buffer
 * @b: character
 * @n: number of bytes
 *
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[--n] = b;
	}
	return (s);
}
