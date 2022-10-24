#include "main.h"
/**
 * swap_int - swaps the values two numbers;
 * @a: the first parameter
 * @b: the second parameter
 * return: always return 0
 */
void swap_int(int *a, int *b)
{
	int v;

	v = *a;
	*a = *b;
	*b = v;
}
