#include "main.h"
/**
 * _isalpha - code entry point
 * @c: the parameter it receives.
 * Description; program that checks if it is an alphabet
 * Return: 1 if the code runs else 0
 */
int _isalpha(int c)/* c is translated to a number in ASCII)*/
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
