#include "main.h"

/**
 * print_line - draws a straight line in the terminal.
 *
 * @n: the length of the line
 *
 * Return: no return
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		i = 1;
		while (i <= n)
		{
			_putchar(95);
			i++;
		}
	}
	_putchar(10);
}
