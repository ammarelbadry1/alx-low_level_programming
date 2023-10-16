#include "main.h"

/**
 * _isupper - checks for uppercase character.
 *
 * @c: the character to check
 *
 * Return: On upper 1 otherwise 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
