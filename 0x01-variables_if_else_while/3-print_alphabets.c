#include <stdio.h>
/**
 * main- container for the program.
 * Return: 0 no error, non zero if error.
**/
int main(void)
{
	char i;
	char j;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	for (j = 'A'; j <= 'Z'; j++)
	{
		putchar(j);
	}
		putchar('\n');
		return (0);
}
