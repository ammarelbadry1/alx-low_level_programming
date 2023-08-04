#include "main.h"

/**
 * print_square - prints a square
 *
 * @size: the size of the square
 *
 * Return: no return
 */

void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		i = 1;
		while (i <= size)
		{
			j = 1;
			while (j <= size)
			{
				_putchar(35);
				j++;
			}
			if (i == size)
				break;
			_putchar(10);
			i++;
		}
	}
	_putchar(10);
}
