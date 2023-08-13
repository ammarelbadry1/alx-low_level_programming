#include "main.h"

/**
 * _strspn - get the length of a prefix substring
 *
 * @s: String to be checked
 * @accept: Accepted segment
 *
 * Return: the number of bytes in the initial segment of s
 * which consist only of bytes from accept
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, is_accept;

	i = 0;
	while (s[i] != 0)
	{
		is_accept = 0;
		j = 0;
		while (accept[j] != 0)
		{
			if (s[i] == accept[j])
			{
				is_accept = 1;
				break;
			}
			j++;
		}
		if (is_accept == 0)
			break;
		i++;
	}
	return (i);
}
