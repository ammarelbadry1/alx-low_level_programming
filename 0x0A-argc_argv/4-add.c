#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 *
 * @argc: arguments count
 * @argv: arguments values
 *
 * Return: On success 0
 * On failure 1
*/

int main(int argc, char *argv[])
{
	int i, j, sum;

	if (argc < 2)
		printf("0\n");
	else
	{
		i = 1;
		while (i < argc)
		{
			for (j = 0; argv[i][j] != 0; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
			i++;
		}
		printf("%d\n", sum);
	}
	return (0);
}
