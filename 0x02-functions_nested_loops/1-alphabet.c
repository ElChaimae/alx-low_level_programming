#include "main.h"

/**
  * print_alphabet - This function prints the alphabet, in lowercase, followed by a new line.
  *
  * Return: void
  */
void print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
		_putchar(i);
	_putchar('\n');
}
