#include<stdio.h>

/**
 * main - Entry point 
 *
 * Return: returns 0 when executed successfully
 */
int main(void)
{
	char c;
	for (c='z';c>='a';c--)
		putchar(c);
	putchar('\n');	
	return (0);
}
