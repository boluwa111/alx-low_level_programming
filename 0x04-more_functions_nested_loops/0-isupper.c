#include "main.h"
/**
 * _isupper- this is the entry point of the function.
 * Description- this code tells if a lettr is upper of lower case.
 * @ch: the parameter to be tested.
 * Return: value of 1 if its true otherwise 0
*/
int _isupper(int ch)
{
	if (ch >= 'A' && ch <= 'Z')
		return (1);
	else
		return (0);
}
