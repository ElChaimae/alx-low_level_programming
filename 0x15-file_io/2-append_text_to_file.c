#include "main.h"

/**
 * append_text_to_file - appends text to the end of a file
 *
 * @filename: The name of the file to append to
 * @text_content: The text content to add to the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{

	int fildes, written_bytes, count;

	if (!filename)
		return (-1);
	fildes = open(filename, O_WRONLY | O_APPEND);
	if (fildes < 0 || !text_content)
		return (-1);
	count = 0;
	while (*(text_content + count))
		count++;
	written_bytes = write(fildes, text_content, count);
	if (written_bytes < 0 || written_bytes != count)
		return (-1);
	close(fildes);
	return (1);
}
