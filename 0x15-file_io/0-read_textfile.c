#include "main.h"

/**
 * read_textfile - read the text file and print it's letters
 * @filename: the name of the file.
 * @letters: total number of letters printed.
 *
 * Return: numbers of letters printed. if failed returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t num_read, num_write;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	num_read = read(fd, buf, letters);
	num_write = write(STDOUT_FILENO, buf, num_read);

	close(fd);

	free(buf);

	return (num_write);
}
