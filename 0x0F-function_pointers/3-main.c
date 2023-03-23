#include "3-calc.h"

/**
 * main - performs simple operations
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success, 98 on failure
 */
void main(int argc, char *argv[])
{
	int (*f)(int a, int b);
	int res;
	char op = *(argv[2]);

	argc;
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	f = get_op_func(argv[2]);

	if (!op)
	{
		printf("Error\n");
		exit(99);
	}

	res = f(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", res);

}
