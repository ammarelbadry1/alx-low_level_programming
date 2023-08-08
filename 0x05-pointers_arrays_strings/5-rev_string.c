#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: String to be reversed
 *
 * Return: no return
*/

void rev_string(char *s)
{
	int counter, i, j, temp;

	counter = 0;
	while (s[counter] != 0)
	{
		counter++;
	}

	for (i = 0; i < counter - 1; i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			temp = s[j];
			s[j] = s[j - 1];
			s[j - 1] = temp;
		}
	}
}
