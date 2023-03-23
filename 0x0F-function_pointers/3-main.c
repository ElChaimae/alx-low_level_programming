#include "3-calc.h"

/**
 * main - performs simple operations
 * @argc: argument count
 * @argv: argument vector
 */
int main(int argc, char *argv[])
{
	int (*f)(int a, int b);
	int res;
	char op = *(argv[2]);

	(void)argc;
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

	return(0);
}
