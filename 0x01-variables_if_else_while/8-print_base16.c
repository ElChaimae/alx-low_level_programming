#include<stdio.h>
#include<ctype.h>

/**
 * main - Entry point
 *
 * Return: returns 0 when executed successfully
 */
int main(void)
{
	char c[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 'a', 'b', 'c', 'd', 'e', 'f'};
	int i;

	for (i = 0; i < 16; i++)
	{
		if (isalpha(c[i]))
			putchar(c[i]);
		else
			putchar('0' + c[i]);
	}
	putchar('\n');
	return (0);
}
