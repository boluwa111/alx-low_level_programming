#include "main.h"
/**
 * _strcpy - copies the string pointed to by src.
 * @src: string to be pointed
 * @dest: string to be be copied to
 * Return: always return string
 */
char *_strcpy(char *dest, char *src)
{
	int length = 0;

	while (*(src + length) != '\0')
	{
		*(dest + length) = *(src + length);
		length++;
	}

	*(dest + length) = '\0';
	return (dest);
}
