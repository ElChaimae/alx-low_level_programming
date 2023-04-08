#include "main.h"


/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 *
 * @b: A pointer to a string of 0 and 1 chars.
 *
 * Return: The converted number, or 0 if there is one or more chars in the
 *         string b that is not 0 or 1, or b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	int count;
	unsigned int uint;

	if (!b)
		return (0);

	count = 0;
	while (*(b + count) != '\0')
	{
		if ((*(b + count) != '0') && (*(b + count) != '1'))
			return (0);
		count++;
	}

	uint = 0;
	while (--count >= 0)
	{
		uint += (*b - '0') * (1 << count);
		b++;
	}

	return (uint);
}
