#include "main.h"

/**
 * append_text_to_file - append a certain text to file
 * @filename: name of file
 * @text_content: text content to append
 * Return: 1 if success else -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	FILE *file;
	int wrt;
	int len;

	if (!filename)
	{
		return (-1);
	}

	file = open(filename, O_WRONLY | O_APPEND, 0600);

	if (file == -1)
	{
		return (-1);
	}
	for (len = 0; text_content[len] != '\0'; len++)
		;

	wrt = write(file, text_content, len);
	if (wrt == -1)
		return (-1);
	close(file);

	return (1);
}
