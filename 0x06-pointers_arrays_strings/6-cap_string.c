#include "main.h"

/**
 * cap_string - capitalize all words of a string
 *
 * @str: String to be capitalized
 *
 * Return: a pointer to a string
*/

char *cap_string(char *str)
{
	int ascii_codes[] = {9, 10, 32, 33, 34, 40, 41, 44, 46, 59, 63, 123, 125};
	int i, j;

	if (str[0] >= 97 && str[0] <= 122)
		str[0] -= 32;
	i = 0;
	while (str[i] != 0)
	{
		for (j = 0; j < 13; j++)
		{
			if (str[i] == ascii_codes[j])
				if (str[i + 1] >= 97 && str[i + 1] <= 122)
					str[i + 1] = str[i + 1] - 32;
		}
		i++;
	}
	return (str);
}
