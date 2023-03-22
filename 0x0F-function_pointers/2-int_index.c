#include "function_pointers.h"

/**
 * int_index - finds a number in an array
 * @array: int array to be searched
 * @size: array size
 * @cmp: numbers comparing function
 *
 * Return: -1 if not found, element index otherwise
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
