#include "main.h"
#include <stdio.h>

/**
 * check_file - Check if files can be opened.
 * @fd_from: File descriptor for the source file.
 * @fd_to: File descriptor for the destination file.
 * @args: Arguments vector.
 * Return: No return.
 */
void check_file(int fd_from, int fd_to, char *args[])
{
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", args[1]);
		exit(98);
	}
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", args[2]);
		exit(99);
	}
}

/**
 * main - Check the code for Holberton School students.
 * @argc: Number of arguments.
 * @argv: Arguments vector.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, err_close;
	ssize_t n_chars, n_wr;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	check_file(fd_from, fd_to, argv);

	n_chars = 1024;
	while (n_chars == 1024)
	{
		n_chars = read(fd_from, buffer, 1024);
		if (n_chars == -1)
			check_file(-1, 0, argv);
		n_wr = write(fd_to, buffer, n_chars);
		if (n_wr == -1)
			check_file(0, -1, argv);
	}

	err_close = close(fd_from);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}

	err_close = close(fd_to);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
	return (0);
}
