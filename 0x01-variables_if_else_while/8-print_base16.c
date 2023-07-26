#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int nums_base_16 = 48;
	char rest_nums = 'a';

	while (nums_base_16 < 58)
	{
		putchar(nums_base_16);
		nums_base_16++;
	}
	while (rest_nums <= 'f')
	{
		putchar(rest_nums);
		rest_nums++;
	}
	putchar('\n');

	return (0);
}
