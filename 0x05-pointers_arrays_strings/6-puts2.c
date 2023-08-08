#include "main.h"

/**
 * puts2 - prints every other character of a string
 *
 * @str: String to be printed
 *
 * Return: no return
*/

void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i] != 0)
	{
		if ((i % 2) == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar(10);
}
