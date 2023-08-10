#include "main.h"
#include <stdio.h>

/**
 * main - prints arguments passed into it
 *
 * @argc: arguments count
 * @argv: arguments values
 *
 * Return: Always 0
*/

int main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
