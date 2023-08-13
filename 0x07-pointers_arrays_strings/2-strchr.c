#include "main.h"

/**
 * _strchr - locates a character in a string
 *
 * @s: String to be searched
 * @c: Character to be located
 *
 * Return: a pointer to the first occurance of c
 * or NULL if not found
*/

char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != 0)
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	if (s[i] == c)
		return (s + i);
	return (0);
}
