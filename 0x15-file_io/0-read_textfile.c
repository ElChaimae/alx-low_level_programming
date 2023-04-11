#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to POSIX standard output
 *
 * @filename: The name of the file to read
 * @letters: The number of letters to read and print
 *
 * Return: The actual number of letters that were read and printed,
 *         0 if the file can't be opened or read, if filename is NULL,
 *         or if write fails or doesn't write the expected amount of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fildes;
	char *buffer;
	ssize_t r_count;
	ssize_t  w_count;

	if (!filename)
		return (0);
	buffer = malloc(letters * sizeof(char));
	if (!buffer)
		return (0);
	fildes = open(filename, 0);
	r_count = read(fildes, buffer, letters);
	w_count = write(STDOUT_FILENO, buffer, r_count);
	if (fildes == -1 || r_count == -1 || w_count == -1 || w_count != r_count)
	{
		close(fildes);
		free(buffer);
		return (0);
	}
	close(fildes);
	free(buffer);
	return (w_count);
}
