#include <stdio.h>
#include <stdlib.h>
/**
 * main - Multiplies two arguments
 * @argc: Length of argv
 * @argv: Arrays of program arguments
 *
 * Return: 0, Success
 */

int main(int argc, char *argv[])
{
	int a, b;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	printf("%d\n", a * b);

	return (0);
}
