#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string
 * @n: string
 * Return: pointer to string
 */
char *cap_string(char *n)
{
	int j = 0;

	while (str[j])
	{
		while (!(str[j] >= 'a' && str[j] <= 'z'))
			i++;
		if (str[j - 1] == ' ' ||
				(str[j - 1] == '\t' ||
				 (str[j - 1] == '\n' ||
				  (str[j - 1] == ',' ||
				   (str[j - 1] == ';' ||
				    (str[j - 1] == '.' ||
				     (str[j - 1] == '!' ||
				      (str[j - 1] == '?' ||
				       (str[j - 1] == '"' ||
					(str[j - 1] == '(' ||
					 (str[j - 1] == ')' ||
					  (str[j - 1] == '{' ||
					   (str[j - 1] == '}' ||
					    j == 0)
					   str[j] -= 32;

					   j++;
	}
	return (str);
}
