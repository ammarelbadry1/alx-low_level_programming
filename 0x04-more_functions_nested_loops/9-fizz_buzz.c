#include <stdio.h>

/**
 * main - Fizz-Buzz tes
 *
 * Return: Always 0
 */

int main(void)
{
	int i;

	i = 1;
	while (i <= 100)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
		{
			printf("FizzBuzz");
		}
		else if ((i % 3) == 0)
		{
			printf("Fizz");
		}
		else if ((i % 5) == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
		if (i == 100)
			break;
		putchar(32);
		i++;
	}
	putchar(10);
	return (0);
}
