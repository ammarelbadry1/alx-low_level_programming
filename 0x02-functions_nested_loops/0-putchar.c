#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int my_word[] = {95, 112, 117, 116, 99, 104, 97, 114};
	int i = 0, size;

	size = sizeof(my_word) / sizeof(int);
	while (i < size)
	{
		_putchar(my_word[i]);
		i++;
	}
	_putchar(10);
	return (0);
}
