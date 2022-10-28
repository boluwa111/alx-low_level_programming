#include "main.h"

/**
 * _strncpy - function that copy a string.
 * @dest: string we are coping from
 * @src: string we are copying to
 * @n: the max number of character to be copied
 * Return: always 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int k;

	k = 0;
	while (k < n && src[k] != '\0')
	{
		dest[k] = src[k];
		k++;
	}
	while (k < n)
	{
		dest[k] = '\0';
		k++;
	}

	return (dest);
}
