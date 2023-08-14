#include "main.h"
#include <stdlib.h>

/**
 * _strlen - get a string length
 *
 * @str: string address
 *
 * Return: string length
*/

int _strlen(char *str)
{
	int counter;

	counter = 0;
	while (*str != 0)
	{
		counter++;
		str++;
	}
	return (counter);
}

/**
 * _strdup - copy a string to a newely allocated space
 *
 * @str: String to be copied
 *
 * Return: On success a pointer to a duplicated string
 * On fail NULL
*/

char *_strdup(char *str)
{
	char *my_str;
	int str_length;
	int i;

	if (str == NULL)
		return (NULL);

	str_length = _strlen(str);
	my_str = malloc(str_length * sizeof(char));

	if (my_str == NULL)
	{
		free(my_str);
		return (NULL);
	}

	i = 0;
	while (i < str_length)
	{
		my_str[i] = str[i];
		i++;
	}
	return (my_str);
}
