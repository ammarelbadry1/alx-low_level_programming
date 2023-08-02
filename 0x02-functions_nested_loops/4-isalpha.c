#include "main.h"

/**
 * _isalpha - Entry point.
 * @c: the character to check
 *
 * Return: if alphabet, 1 (Success)
 */

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar(10);
}
