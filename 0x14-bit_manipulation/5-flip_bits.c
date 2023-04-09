#include "main.h"

/**
 * flip_bits - This function returns the number of bits
 * you would need to flip to get from one number to another.
 *
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits needed to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count;
	unsigned long int XOR;

	count = 0;
	XOR = n ^ m;
	while (XOR != 0)
	{
		if (XOR & 1)
			count++;
		XOR >>= 1;
	}
	return (count);
}

