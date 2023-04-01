#include <stdio.h>

/**
 * run_before_main - a function thats runs before main
 *
 * Return: always 0
 */
__attribute__((constructor))
int run_before_main(void)
{
	printf("You're beat! and yet, you must allow,\n
	I bore my house upon my back!\n");
	return (0);
}

