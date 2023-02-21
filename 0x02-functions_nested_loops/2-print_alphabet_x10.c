#include "main.h"

/**
  * print_alphabet - This function prints 10 times the alphabet, in lowercase,
  * followed by a new line.
  *
  * Return: void
  */
void print_alphabet_x10(void)
{
	int i, j;

	for (j = 0; j < 11; j++)
	{
		for (i = 97; i < 123; i++)
			_putchar(i);
		_putchar('\n');	
	}
}
