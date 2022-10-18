#include <stdio.h>
/**
 *main- program entry point
 *Return: 0 success, non zero fail
*/
int main(void)
{
	int f, i, j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			for (f = '0'; f <= '9'; f++)
			{
				if (i < j && j < f)
				{
					putchar(i);
					putchar(j);
					putchar(f);
					if (i == '7' && j == '8' && f == '9')
					{
						break;
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
