#include "main.h"

/**
 * print_sign - Entry point
 * @n: the number to check
 *
 * Return: if positive, 1. if negative, -1. if zero, 0 (Success)
 */

int print_sign(int n)
{
	if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar(10);
}
