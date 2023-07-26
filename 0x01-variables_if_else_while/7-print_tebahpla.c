#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char rev_alphabet = 'z';

	while (rev_alphabet >= 'a')
	{
		putchar(rev_alphabet);
		rev_alphabet--;
	}
	putchar('\n');

	return (0);
}
