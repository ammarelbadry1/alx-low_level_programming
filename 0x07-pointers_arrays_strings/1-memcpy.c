#include "main.h"

/**
 * _memcpy - copies memory area
 *
 * @dest: the buffer to copy to
 * @src: the buffer to copy from
 * @n: bytes copied
 *
 * Return: a pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
