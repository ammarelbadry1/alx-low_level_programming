#include "main.h"

/**
 * puts_half - prints half of a string
 *
 * @str: String to be printed
 *
 * Return: no return
*/

void puts_half(char *str)
{
	int count, i;

	count = 0;
	while (str[count] != 0)
	{
		count++;
	}
	if ((count % 2) == 1)
	{
		i = count / 2;
	}
	else
	{
		i = (count - 1) / 2;
	}
	i++;
	while (i < count)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar(10);
}
