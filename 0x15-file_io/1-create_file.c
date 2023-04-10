#include "main.h"

/**
 * create_file - creates a file and writes text content to it
 *
 * @filename: The name of the file to create
 * @text_content: The text content to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fildes, count, bytes_written;

	if (filename == NULL)
		return (-1);
	if (text_content !=  NULL)
	{
		count = 0;
		while (*(text_content + count))
			count++;
	}
	fildes = open(filename, O_CREAT | O_WRONLY | O_APPEND | O_TRUNC, 0600);
	bytes_written = write(fildes, text_content, count);
	if (fildes < 0 || bytes_written < 0 || bytes_written != count)
		return (-1);
	close(fildes);
	return (1);
}
