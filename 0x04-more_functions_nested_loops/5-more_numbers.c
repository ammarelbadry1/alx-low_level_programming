#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Return: no return
 */

void more_numbers(void)
{
	int i, j;

	j = 0;
	while (j < 10)
	{
		i = 0;
		while (i < 15)
		{
			if (i > 9)
			{
				_putchar(i / 10 + 48);
			}
			_putchar(i % 10 + 48);
			i++;
		}
		_putchar(10);
		j++;
	}
}
