#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 *
 * @nmemeb: the number of array elements
 * @size: Each element size
 *
 * Return: a pointer to the allocated space of memory
 * that contains an array
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *my_array;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	my_array = malloc(nmemb * size);
	
	if (my_array == NULL)
	{
		free(my_array);
		return (NULL);
	}

	i = 0;
	while (i < (nmemb * size))
	{
		my_array[i] = 0;
		i++;
	}
	return (my_array);
}
