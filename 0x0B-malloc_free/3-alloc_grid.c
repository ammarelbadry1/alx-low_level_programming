#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - creates a grid initialized to 0
 *
 * @width: Grid width
 * @height: Grid height
 *
 * Return: a pointer to a two dimensional array of integers
*/

int **alloc_grid(int width, int height)
{
	int **my_array;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	my_array = malloc(height * sizeof(int *));

	if (my_array == NULL)
	{
		free(my_array);
		return (NULL);
	}

	i = 0;
	while (i < height)
	{
		my_array[i] = malloc(width * sizeof(int));
		if (my_array[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(my_array[i]);
			free(my_array);
			return (NULL);
		}
		j = 0;
		while (j < width)
		{
			my_array[i][j] = 0;
			j++;
		}
		i++;
	}
	return (my_array);
}
