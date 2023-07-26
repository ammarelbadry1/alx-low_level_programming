#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 48, j, k;

	while (i < 58)
	{
		j = i + 1;
		while (j < 58)
		{
			k = j + 1;
			if (i == j)
			{
				j++;
				continue;
			}
			while (k < 58)
			{
				if (j == k)
				{
					k++;
					continue;
				}
				putchar(i);
				putchar(j);
				putchar(k);
				if (i == 55 && j == 56 && k == 57)
				{
					k++;
					continue;
				}
				putchar(44);
				putchar(32);
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');

	return (0);
}
