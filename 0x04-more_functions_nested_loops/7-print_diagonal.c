#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 *
 * @n: the length of the line
 *
 * Return: not return
 */

void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		i = 1;
		while (i <= n)
		{
			j = 1;
			while (j < i)
			{
				_putchar(32);
				j++;
			}
			_putchar(92);
			if (i == n)
				break;
			_putchar(10);
			i++;
		}
	}
	_putchar(10);
}
