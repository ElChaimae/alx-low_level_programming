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
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", *(argv + i));
	return (0);
}
