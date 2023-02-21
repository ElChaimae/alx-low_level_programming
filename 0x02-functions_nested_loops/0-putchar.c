#include "main.h"

/**
   * main - This function prints _putchar using putchar
   *
   * Return: This function returns 0 on success
   */

int main(void)
{
	char str[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
		_putchar(str[i]);
	_putchar('\n');
	return (0);
}
