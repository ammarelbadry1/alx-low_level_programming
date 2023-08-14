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

	counter = 1;
	while (*str != 0)
	{
		counter++;
		str++;
	}
	return (counter);
}

/**
 * string_nconcat - concatenates a string with n bytes of another string
 *
 * @s1: first param
 * @s2: second param
 * @n: Number of bytes to be used
 *
 * Return: a pointer to the allocated space of memory
 * that contains concatenated strings
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *my_str;
	unsigned int i, s1_len, s2_len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s1_len = _strlen(s1);
	s2_len = _strlen(s2);
	my_str = malloc((s1_len + s2_len - 1) * sizeof(char));

	if (my_str == NULL)
	{
		free(my_str);
		return (NULL);
	}

	i = 0;
	while (i < s1_len)
	{
		my_str[i] = s1[i];
		i++;
	}

	if (n >= s2_len)
		n = s2_len;
	
	i = 0;
	while (i < n)
	{
		my_str[i + s1_len - 1] = s2[i];
		i++;
	}
	return (my_str);
}
