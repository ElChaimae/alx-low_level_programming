#include "main.h"
int help(int n, int m);

int is_prime_number(int n)
{
	if (n <= 0)
		return (0);
	else if (n == 1)
		return (0);
	else
		return (help(n, 2));
}

int help(int n, int m)
{
	if (n == m)
		return (1);
	else if (n % m == 0)
		return (0);
	else
		return (help(n, m + 1));
}
