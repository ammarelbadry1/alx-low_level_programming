#include "main.h"

/**
 * print_triangle - prints a triangle
 *
 * @size: Size of the triangle
 *
 * Return: no return
 */

void print_triangle(int size)
{
	int i, j;

	i = 1;
	while (i <= size)
	{
		j = i;
		while (j < size)
		{
			_putchar(32);
			j++;
		}
		j = 0;
		while (j < i)
		{
			_putchar(35);
			j++;
		}
		_putchar(10);
		i++;
	}
	if (size <= 0)
		_putchar(10);
}
