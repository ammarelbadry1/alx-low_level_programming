#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates to strings
 *
 * @dest: the buffer where we append
 * @src: the string which we append
 *
 * Return: a pointer to the destination
*/

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i] != 0)
	{
		i++;
	}
	j = 0;
	while (src[j] != 0)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
