#include "main.h"

/**
 * read_textfile - read the text file and print it's letters
 * @filename: the name of the file.
 * @letters: total number of letters printed.
 *
 * Return: number of letters printed. if failed returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nr, nw;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	nr = read(fd, buf, letters);
	nw = write(STDOUT_FILENO, buf, nr);

	close(fd);

	free(buf);

	return (nw);
}
