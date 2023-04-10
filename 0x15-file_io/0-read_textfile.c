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
	FILE *file;
	char *buffer;
	size_t r_count;
	size_t w_count;

	if (!filename)
		return (0);
	file = fopen(filename, "r");
	if (!file)
		return (0);
	buffer = malloc((letters + 1) * sizeof(char));
	if (!buffer)
	{
		fclose(file);
		return (0);
	}
	r_count = fread(buffer, sizeof(char), letters, file);
	if (r_count == 0 && !feof(file))
	{
		fclose(file);
		free(buffer);
		return (0);
	}
	buffer[r_count] = '\0';
	w_count = fwrite(buffer, sizeof(char), r_count, stdout);
	if (w_count < r_count)
	{
		fclose(file);
		free(buffer);
		return (0);
	}
	fclose(file);
	free(buffer);
	return (r_count);
}
