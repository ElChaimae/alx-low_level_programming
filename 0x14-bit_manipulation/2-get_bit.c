#include "main.h"
/**
 * get_bit - This function returns the value of a bit at a given index.
 *
 * @n: The number to extract the bit from.
 * @index: The index of the bit to extract.
 *
 * Return: The value of the bit at index or -1 if an error occurred.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int mask;

	mask = 1 << index;
	if (n & mask)
		return (1);
	return (0);
}

