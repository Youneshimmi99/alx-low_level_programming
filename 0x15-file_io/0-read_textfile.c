#include "main.h"

/**
 * read_textfile - read text file and print the letters
 * @filename: the name of file.
 * @letters: number of letters printed.
 *
 * Return: numbers of letters printed.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buff;
	ssize_t bytes, r;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		close(fd);
		return (0);
	}

	buff = malloc(sizeof(char) * letters);
	if (!buff)
	{
		close(fd);
		return (0);
	}

	bytes = read(fd, buff, letters);

	if (bytes == -1)
	{
		close(fd);
		free(buff);
		return (0);
	}

	r = write(STDOUT_FILENO, buff, bytes);

	if (r == -1)
	{
		close(fd);
		free(buff);
		return (0);
	}
	close(fd);
	return (bytes);
}
