#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 *
 * @min: first value in the array
 * @max: last value in the array
 *
 * Return: a pointer to the newely created array
*/

int *array_range(int min, int max)
{
	int *my_array;
	int i;

	if (min > max)
		return (NULL);

	my_array = malloc((max - min + 1) * sizeof(int));

	if (my_array == NULL)
	{
		free(my_array);
		return (NULL);
	}

	i = 0;
	while (min <= max)
	{
		my_array[i] = min;
		min++;
		i++;
	}
	return (my_array);
}
