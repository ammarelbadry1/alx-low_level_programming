#include "main.h"
#include <stdio.h>

/**
 * _strstr - locates a substring
 *
 * @haystack: String to be searched
 * @needle: String to be located
 *
 * Return: a pointer to the beginning of the located substring
 * or NULL if the substring is not found
*/

char *_strstr(char *haystack, char *needle)
{
	int i, j, tmp;

	i = 0;
	while (haystack[i] != 0)
	{
		tmp = i;
		j = 0;
		while (haystack[i] != 0 && needle[j] != 0 && haystack[i] == needle[j])
		{
			i++;
			j++;
		}
		if (!needle[j])
			return (haystack + tmp);
		i = tmp + 1;
	}
	return (0);
}
