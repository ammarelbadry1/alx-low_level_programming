#include "main.h"
#include <stdio.h>

/**
 * main - copies the content of a file to another file
 *
 * @argc: the arguments count
 * @argv: a pointer to the array of the arguments values
 *
 * Return: Always 0
*/

int main(int argc, char **argv)
{
	int fd_from, fd_to, read_chars;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97); }
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98); }
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99); }
	for (read_chars = 1024; read_chars == 1024;)
	{
		read_chars = read(fd_from, buffer, 1024);
		if (read_chars == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98); }
		if (write(fd_to, buffer, read_chars) == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99); }
	}
	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close %d", fd_from);
		exit(100); }
	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close %d", fd_to);
		exit(100); }
	return (0);
}
