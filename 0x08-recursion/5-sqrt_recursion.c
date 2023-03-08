#include "main.h"
int sqrt_recursion(int n, int root);

/**
 * _sqrt_recursion - calculates square root of n
 * @n: given number
 *
 * Return: square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	else if (n == 0)
		return (0);

	else
		return (sqrt_recursion(n, 1));
}

int sqrt_recursion(int n, int root)
{
	if (n == root * root)
		return (root);
	else if (n < root * root)
		return (-1);
	else
		return (sqrt_recursion(n, root + 1));
}
