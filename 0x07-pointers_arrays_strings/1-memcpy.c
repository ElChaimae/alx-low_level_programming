#include "main.h"
/**
 * _memcpy - copies n bytes from memory area src
 * to memory area dest
 * @dest: destination buffer
 * @src: source buffer
 * @n: number of bytes
 *
 * Return: pointer to destination buffer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
