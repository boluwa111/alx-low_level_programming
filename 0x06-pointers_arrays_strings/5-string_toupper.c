#include "main.h"

/**
 * string_toupper - function that changes all lowercase
 * letters of a string to uppercase
 * @n: pointer
 * Return: char
 */
char *string_toupper(char *n)
{
	int j;

	j = 0;
	while (n[j] != '\0')
	{
		if (n[j] >= 'a' && a[j] <= 'z')
			n[j] = n[j] - 32;
		j++;
	}
	return (n);
}
