#include "main.h"

/**
 * string_toupper - changes all lowercase characters
 * to uppercase
 *
 * @str: string to be manipulated
 *
 * Return: a pointer to a string
*/

char *string_toupper(char *str)
{
	int i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
