#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 48, j, k, l;

	while (i < 58)
	{
		j = 48;
		while (j < 58)
		{
			k = i;
			while (k < 58)
			{
				l = j + 1;
				while (l < 58)
				{
					putchar(i);
					putchar(j);
					putchar(32);
					putchar(k);
					putchar(l);
					if (i == 57 && j == 56 && k == 57 && l == 57)
					{
						l++;
						continue;
					}
					putchar(44);
					putchar(32);
					l++;
				}
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');

	return (0);
}
