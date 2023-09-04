#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 *
 * @filename: the file to be read
 * @letters: the number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t read_chars, write_chars;
	int fd;
	char *buf;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(letters * sizeof(char));
	if (!buf || !filename)
	{
		free(buf);
		return (0);
	}
	read_chars = read(fd, buf, letters);
	write_chars = write(STDOUT_FILENO, buf, read_chars);
	close(fd);
	free(buf);
	return (write_chars);
}
