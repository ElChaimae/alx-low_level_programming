#include <stdio.h>
#include <stdlib.h>

int isNumeric(char *str);

/**
 * main - adds arguments
 * @argc: Length of argv
 * @argv: Arrays of program arguments
 *
 * Return: 0, Success
 */
int main(int argc, char *argv[])
{
	int s = 0, i;

	for (i = 1; i < argc; i++)
	{
	if (isNumeric(argv[i]))
		s += atoi(argv[i]);
	else
	{
		printf("Error\n");
		return (1);
	}
	}
	printf("%d\n", s);

	return (0);
}

/**
 * isNumeric - checks if numeric
 * @str: string to be checked
 *
 * Return: 1 for true and 0 for false
 */
int isNumeric(char *str)
{
	while (*str != '\0')
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}
