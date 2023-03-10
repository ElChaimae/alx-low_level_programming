#include <stdio.h>
#include "main.h"

/**
  * print_to_98 - prints all natural numbers
  * from n to 98
  * @n: integer
  *
  * Return: void
  */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
			printf("%d, ", n++);
	}
	else if (n > 98)
	{
		while (n > 98)
			printf("%d, ", n--);
	}
	printf("98\n");
}
