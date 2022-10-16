#include <stdio.h>
/**
 *main- containner for the program.
 *Return: programs returns 0 if it runs else returns non zero.
**/
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z' ; i++) /**
					*this is the condition;
					*counts to the next letter after every iteration
					**/
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
