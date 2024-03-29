#include "main.h"

/**
 * create_file - creates file
 * @filename: filename
 * @text_content: content wrtitten into the file
 * Return: 1 if success else it fails
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int len;
	int wrt;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
	{
		return (-1);
	}

	for (len = 0; text_content[len] != '\0'; len++)
		;
	wrt = write(fd, text_content, len);
	if (wrt == -1)
		return (-1);
	close(fd);

	return (1);
}
