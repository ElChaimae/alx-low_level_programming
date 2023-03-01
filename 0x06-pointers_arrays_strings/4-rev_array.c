#include "main.h"

/**
 * reverse_array - it reverses the content of an array.
 * @a: array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */

void reverse_array(int *a, int n)
{
int i = 0, tmp = 0;

n--;
while (i < n)
{
	tmp = a[i];
	a[i] = a[n];
	a[n] = tmp;
	n--;
	i++;
}

}
