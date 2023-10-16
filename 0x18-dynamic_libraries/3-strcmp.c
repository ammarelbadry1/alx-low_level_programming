#include "main.h"

/**
 * _strcmp - compares two strings
 *
 * @s1: first string to be compared
 * @s2: second string to be compared
 *
 * Return: comparison integer
*/

int _strcmp(char *s1, char *s2)
{
	int i, diff;

	diff = 0;
	i = 0;
	while (diff == 0)
	{
		if ((s1[i] == 0) && (s2[i] == 0))
			break;
		diff += s1[i] - s2[i];
		i++;
	}
	return (diff);
}
