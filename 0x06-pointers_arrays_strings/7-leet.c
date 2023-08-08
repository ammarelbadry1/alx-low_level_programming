#include "main.h"

/**
 * leet - encodes a string
 *
 * @str: String to be encoded
 *
 * Return: a pointer to the string
*/

char *leet(char *str)
{
	char lCharacters[] = {'a', 'e', 'o', 't', 'l'};
	char uCharacters[] = {'A', 'E', 'O', 'T', 'L'};
	char substitutes[] = {52, 51, 48, 55, 49};
	int i, j;

	i = 0;
	while (str[i] != 0)
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == lCharacters[j] || str[i] == uCharacters[j])
				str[i] = substitutes[j];
		}
		i++;
	}
	return (str);
}
