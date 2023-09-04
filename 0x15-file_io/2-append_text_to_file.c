#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 *
 * @filename: the file to be appended
 * @text_content: the content to be written
 *
 * Return: 1 on success and -1 on failure
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, write_chars, chars_len;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	chars_len = 0;
	while (text_content[chars_len])
		chars_len++;
	write_chars = write(fd, text_content, chars_len);
	if (write_chars == -1)
		return (-1);
	close(fd);
	return (1);
}
