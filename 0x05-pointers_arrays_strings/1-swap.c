#include "main.h"
/**
 * swap_int - It swaps two integers.
 * @a: pointer to int
 * @b: pointer to int
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
