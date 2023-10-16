#include "main.h"

/**
 * _strcpy - copies a string from one buffer to another
 *
 * @src: String to be copied
 * @dest: buffer to be filled with the copied string
 *
 * Return: a pointer to dest buffer
*/

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}
