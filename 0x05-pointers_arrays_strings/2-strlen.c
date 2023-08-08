#include "main.h"

/**
 * _strlen - get a string length
 *
 * @s: string address
 *
 * Return: string length
*/

int _strlen(char *s)
{
	int counter;

	counter = 0;
	while (*s != 0)
	{
		counter++;
		s++;
	}
	return (counter);
}
