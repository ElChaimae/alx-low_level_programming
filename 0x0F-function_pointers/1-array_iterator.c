#include "function_pointers.h"

/**
 * array_iterator - call the action function on elements of an array
 * @array: array of parameters
 * @size: array size
 * @action: function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		if (action && (array + i))
			action(*(array + i));
	}
}
