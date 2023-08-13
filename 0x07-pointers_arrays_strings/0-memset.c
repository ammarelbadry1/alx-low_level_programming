#include "main.h"

/**
 * _memset - fills memory with a constant byte
 *
 * @s: a pointer to a buffer
 * @b: the character to be fill with
 * @n: the number of bytes to be filled
 *
 * Return: a pointer to the memory area pointed by s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
