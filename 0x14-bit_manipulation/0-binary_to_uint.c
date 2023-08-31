#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 *
 * @b: binary.
 *
 * Return: unsigned int.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int n;
	int len, base;

	if (!b)
		return (0);

	len = 0;
	while (b[len] != 0)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		len++;
	}
	len--;

	n = 0;
	base = 1;
	while (len >= 0)
	{
		if (b[len] == '1')
			n += base;
		 len--;
		 base *= 2;
	}

	return (n);
}
