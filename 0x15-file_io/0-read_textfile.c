#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * read_textfile - a function used for reading specific
 * letters of a file
 * @filename: pointer to the file
 * @letters: number of letters to be printed
 * Return: the bytes_written
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file;
	char *buffer;
	size_t byte_read;
	ssize_t bytes_written;

	if (filename == (NULL))
		return (0);

	file = fopen(filename, "rt");

	if (file == (NULL))
		return (0);

	buffer = (char *)malloc(letters + 1);

	if (buffer == (NULL))
	{
		fclose(file);
		return (0);
	}
	
	byte_read = fread(buffer, 1, letters, file);
	buffer[byte_read] = '\0';
	bytes_written = write(STDOUT_FILENO, buffer, byte_read);

	if (bytes_written == (-1) || (size_t)bytes_written != byte_read)
	{
		free(buffer);
		fclose(file);
		return (0);
	}

	free(buffer);
	fclose(file);
	return (bytes_written);
}
