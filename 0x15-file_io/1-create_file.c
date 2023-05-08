#include "main.h"

/**
 * create_file - create one file
 * @filename: the name of file.
 * @text_content: content writen at the file.
 *
 * Return: 1 if success. -1 if fails.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int num;
	int rwr;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (num = 0; text_content[num]; num++)
		;

	rwr = write(fd, text_content, num);

	if (rwr == -1)
		return (-1);

	close(fd);

	return (1);
}
