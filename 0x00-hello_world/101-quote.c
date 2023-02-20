#include <stdio.h>
#include <unistd.h>

/**
 * main- prints a string
 *
 * Description: Entry point
 * Return: returns 1 to indicate success
 */
int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fwrite(str, sizeof(char), sizeof(str) - 1, stdout);
	fflush(stdout);
	return (1);
}
