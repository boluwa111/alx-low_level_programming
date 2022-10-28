#include "main.h"
/**
 * _strncat - append a string to another and
 * will use at most n bytes from src,src does
 * not need to be null-terminated if it contains n or more bytes
 * @n: maximum bytes
 * @dest: the string to be appended to
 * @src: the string we want to add to another string
 * Return: always 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int k;
	int m;

	k = 0;
	while (dest[k] != '\0')
	{
		k++;
	}
	m = 0;
	while (m < n && src[m] != '\0')
	{
		dest[k] = src[m];
		k++;
		m++;
	}
	dest[k] = '\0';
	return (dest);
}
