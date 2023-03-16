#include "main.h"

/**
 * malloc_checked - allocate memory using malloc1
 * @b: number of bytes
 *
 * Return: string pointer
 */
void *malloc_checked(unsigned int b)
{
	void *str;

	str = malloc(b);

	if (str == NULL)
		exit(98);

	return (str);
}
