#include "main.h"
#include <string.h>

/**
 * main - Copies the content of a file to another file.
 *
 * @argc: The number of arguments passed to the program.
 * @argv: An array of strings containing the arguments passed to the program.
 *
 * Return: 0 if successful, otherwise an error code.
 */

int main(int argc, char **argv)
{
	int fd_from, fd_to, count_r, count_w;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n", argv[1]);
		exit(98);
	}
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd_to < 0)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[1]), exit(99);
	while ((count_r = read(fd_from, buffer, 1024)) > 0)
	{
		count_w = write(fd_to, buffer, count_r);
		if (count_w != count_r)
		{
			dprintf(STDERR_FILENO, "Error: Write error: incomplete write\n");
			exit(99);
		}
	}
	if (count_r < 0)
	{
		dprintf(STDERR_FILENO, "Error: Read Error: incomplete read\n");
		exit(98);
	}
	if (close(fd_from) < 0)
		dprintf(STDERR_FILENO, "Error: Can't close %d\n", fd_from), exit(100);
	if (close(fd_to) < 0)
		dprintf(STDERR_FILENO, "Error: Can't close %d\n", fd_to), exit(100);
	return (0);
}
