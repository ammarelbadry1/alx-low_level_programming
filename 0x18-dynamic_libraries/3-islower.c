#include "main.h"

/**
 * _islower - Entry point
 * @c: the character to check
 *
 * Return: if yes, 1. if not, 0 (Success)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar(10);
}
