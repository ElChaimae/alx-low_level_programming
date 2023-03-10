#include "main.h"

/**
 * print_rev - prints a string, in reverse
 * @s: pointer to string
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	i--;
	for (; i >= 0 ; i--)
		_putchar(s[i]);
	_putchar('\n');
}
