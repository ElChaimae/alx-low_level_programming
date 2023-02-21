#include <stdio.h>
#include "main.h"

/**
  * tiles_table - prints 9 times tables 
  *
  * Return: void
  */
void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j= 0; j < 10; j++)
			printf("%d, ", i * j);
		printf("\n");
	}
}
