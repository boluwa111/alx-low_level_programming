#include "main.h"
/**
 * main- this serves as the container for the program
 * Return: 0 is returned if the code runs else return non zero value
*/
int main(void)
{
	char text[9] = "_putchar";
	int i = 0;

	for (i = 0; i < 8; i++)
	{
		_putchar(text[i]);
	}
	_putchar('\n');
	return (0);
}

