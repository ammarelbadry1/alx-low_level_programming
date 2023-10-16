#include "main.h"

/**
 * _abs - Entry point
 * @n: the number to check
 *
 * Return: absolute value of n
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	return (n);
}
