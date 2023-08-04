#include <stdio.h>
#include <math.h>

/**
 * main - prints the largest prime factor.
 *
 * Return: Always 0.
 */

int main(void)
{
	long int i, n = 612852475143;

	while (n%2 == 0)
	{
		n = n/2;
	}

	for (i = 3; i <= sqrt(n); i = i+2)
	{
		while (n%i == 0)
		{
			n = n/i;
		}
	}

	printf("%ld", n);

	putchar(10);
	return (0);
}