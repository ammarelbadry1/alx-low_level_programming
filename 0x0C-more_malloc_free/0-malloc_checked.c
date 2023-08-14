#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 *
 * @b: Memory size to be allocated
 *
 * Return: a pointer to the allocated memory.
 * On fail status value is equal to 98.
*/

void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
