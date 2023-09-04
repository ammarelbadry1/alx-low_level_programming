#include "main.h"

/**
 * create_file - creates a file and writes content in it
 *
 * @filename: Created file name
 * @text_content: the character string to be written
 *
 * Return: 1 on success, -1 otherwise
*/

int create_file(const char *filename, char *text_content)
{
	int fd, chars_len, write_chars;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (fd);
	if (!text_content)
		text_content = "";
	chars_len = 0;
	while (text_content[chars_len] != 0)
		chars_len++;
	write_chars = write(fd, text_content, chars_len);
	if (write_chars == -1)
		return (-1);
	close(fd);
	return (1);
}
