#include <stdio.h>

/**
 * print_to_98 - Entry point
 * @n: the number to start with
 *
 * Return: Always 0 (Success)
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n == 98)
				break;
			putchar(44);
			putchar(32);
			n++;
		}
	} else
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n == 98)
				break;
			putchar(44);
			putchar(32);
			n--;
		}
	}
	putchar(10);
}
