#include "main.h"
/**
 * _strcat - a function that concateneates two strings
 * @src: string to be appended
 * @dest: string we are adding to
 * Return: always return 0
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
