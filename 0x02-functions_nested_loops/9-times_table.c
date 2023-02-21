#include <stdio.h>
#include "main.h"

/**
  * times_table - prints 9 times tables
  *
  * Return: void
  */
void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		printf("0,");
		for (j = 1; j < 9; j++)
		{
			if (i * j <= 9)
				printf("  %d,", i * j);
			else
				printf(" %d,", i * j);
		}
		if (i * j <= 9)
			printf("  %d\n", i * j);
		else
			printf(" %d\n", i * j);
	}
}
