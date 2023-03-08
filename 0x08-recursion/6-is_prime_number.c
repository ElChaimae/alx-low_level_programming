#include "main.h"
int help(int n, int m);

/**
 * is_prime_number - determine if a number is a prime number
 * @n: int number
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 0)
		return (0);
	else if (n == 1)
		return (0);
	else
		return (help(n, 2));
}

/**
 * help - helper function, recursive steps taken
 * @n: number given to original function is_prime_number
 * @m: divisor
 *
 * Return: 0 if not prime, 1 if prime
 */
int help(int n, int m)
{
	if (n == m)
		return (1);
	else if (n % m == 0)
		return (0);
	else
		return (help(n, m + 1));
}
