#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array
 *
 * @a: Array to work on
 * @n: Number of elements to be printed
 *
 * Return: no return
*/

void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (i == (n - 1))
		{
			printf("%d", a[i]);
		}
		else
		{
			printf("%d, ", a[i]);
		}
		i++;
	}
	putchar(10);
}
