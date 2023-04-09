#include "main.h"

/**
 * count_bits - Returns the number of bits in a decimal number.
 * @num: The decimal number to count the bits of.
 *
 * Return: The number of bits in the decimal number.
 */
unsigned int count_bits(unsigned long int num)
{
	unsigned int count;

	count = 0;
	while (num > 0)
	{
		num >>= 1;
		count++;
	}
	return (count - 1);
}

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

	if (count_bits(n) < index)
		return (-1);
	mask = 1 << index;
	if (n & mask)
		return (1);
	return (0);
}

