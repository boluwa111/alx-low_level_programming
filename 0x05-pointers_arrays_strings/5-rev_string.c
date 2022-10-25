#include "main.h"
/**
 * rev_string - a function that reverses a string.
 * @s: the string to be reversed
 * Return: always return 0
 */
void rev_string(char *s)
{
	char rev = s[0];
	int k = 0;
	int i;

	while (s[k] != '\0')
		c++;
	for (i = 0; i < k; i++)
	{
		k--;
		rev = s[i];
		s[i] = s[k];
		s[k] = rev;
	}
}
