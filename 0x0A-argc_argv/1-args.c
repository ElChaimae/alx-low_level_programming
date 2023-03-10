#include <stdio.h>

/**
 * main - Prints its name
 * @argc: Length of argv
 * @argv: Arrays of program arguments
 *
 * Return: 0, Success
 */

int main(int argc, char *argv[])
{
	printf("%d\n", --argc);
	(void)argv;
	return (0);
}
