#include "main.h"

/**
 * _strncat - concatenates two strings with the use of
 * the most n bytes.
 *
 * @dest: the buffer where we append
 * @src: the string which we append
 * @n: the most n bytes to be appended
 *
 * Return: a pointer to the destination
*/

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != 0)
		i++;
	j = 0;
	while (j < n && src[j] != 0)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = 0;
	return (dest);
}
