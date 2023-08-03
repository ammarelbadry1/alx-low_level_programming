#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Return: no return
 */

void print_alphabet_x10(void)
{
	int i = 0;
	char j;

	while (i < 10)
	{
		j = 'a';
		while (j <= 'z')
		{
			_putchar(j);
			j++;
		}
		_putchar(10);
		i++;
	}
}
