#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars and
 * initializes it with a specific char
 *
 * @size: Array size
 * @c: the char to be filled with
 *
 * Return: On success a pointer to the array
 * On fail NULL
*/

char *create_array(unsigned int size, char c)
{
	char *my_array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	my_array = malloc(size * sizeof(char));

	if (my_array == NULL)
	{
		free(my_array);
		return (NULL);
	}

	i = 0;
	while (i < size)
	{
		my_array[i] = c;
		i++;
	}
	return (my_array);
}
