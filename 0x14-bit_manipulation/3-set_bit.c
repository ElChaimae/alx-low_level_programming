/**
 * set_bit - This function sets the value of a bit to 1 at a given index.
 *
 * @n: A pointer to the number to set the bit in.
 * @index: The index of the bit to set.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8 - 1)
		return (-1);
	*n = *n | (1ul << index);
	return (1);
}

