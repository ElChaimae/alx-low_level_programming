#include "main.h"

/**
  * print_sign - This function prints the sign of a num.
  * @c: character to be checked
  *
  * Return: 1 if c is positive
  * -1 if c is negative
  * 0 otherwise
  */
int print_sign(int c)
{
	if (c == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (c > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
