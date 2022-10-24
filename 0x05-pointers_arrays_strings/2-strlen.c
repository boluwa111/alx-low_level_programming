#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: the string input
 * Return: return 0
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
