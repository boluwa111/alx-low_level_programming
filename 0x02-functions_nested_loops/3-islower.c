#include "main.h"
/**
 * _islower- entry point of the code
 * Description: this checks if a character is lower case
 * @c: the paramater it receives
 * Return: 1 if this is true; else return 0.
*/
int _islower(int c)
{
	int i = 'a';

	for (i = 'a'; i <= 'z'; i++)
	{
		/* this checks if c satisfies condition*/
		if (c == i)
		{
			return (1);
		}
	}
	return (0);
}
