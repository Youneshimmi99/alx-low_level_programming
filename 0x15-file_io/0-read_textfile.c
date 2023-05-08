#include "main.h"
/**
  * read_textfile - read a text file and print to the POSIX standard
  * output
  * @filename: the file to read from
  * @letters: the number of letters must be read and print
  * Return: the actual number of letters to read and print
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	int fd;
	ssize_t n_read, n_written;

	if (!filename)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);
	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		free(buf);
		return (0);
	}
	while ((n_read = read(fd, buf, letters)) > 0)
	{
		n_written = write(STDOUT_FILENO, buf, n_read);
		if (n_written == -1 || n_written != n_read)
		{
			free(buf);
			close(fd);
			return (0);
		}
	}
	free(buf);
	close(fd);
	return (n_written);
}
