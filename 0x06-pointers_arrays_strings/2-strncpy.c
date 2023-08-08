#include "main.h"

/**
 * _strncpy - copies a string with the use of
 * the most n bytes.
 *
 * @dest: The buffer we will copy to
 * @src: String to be copied
 * @n: Number of characters to be copied
 *
 * Return: a pointer to the destination
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i, isEnded;

	i = 0;
	while (i < n)
	{
		if (src[i] == 0)
			isEnded = 1;
		if (isEnded == 1)
		{
			dest[i] = 0;
		}
		else
		{
			dest[i] = src[i];
		}
		i++;
	}
	return (dest);
}
