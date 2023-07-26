#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 48, j;

	while (i < 58)
	{
		j = i + 1;
		while (j < 58)
		{
			if (i == j)
			{
				j++;
				continue;
			}
			putchar(i);
			putchar(j);
			if (i == 56 && j == 57)
			{
				j++;
				continue;
			}
			putchar(44);
			putchar(32);
			j++;
		}
		i++;
	}
	putchar('\n');

	return (0);
}
