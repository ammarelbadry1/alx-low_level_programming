#include "main.h"

/**
 * print_last_digit - Entry point
 * @n: the number to check
 *
 * Return: the last digit of n (Success)
 */

int print_last_digit(int n)
{
	int remainder;

	remainder = n % 10;
	if (remainder < 0)
	{
		_putchar(-remainder + 48);
		return (-remainder);
	}
	_putchar(remainder + 48);
	return (remainder);
}
