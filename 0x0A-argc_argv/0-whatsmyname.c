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
	printf("%s\n", *argv);
	(void)argc;
	return (0);
}
