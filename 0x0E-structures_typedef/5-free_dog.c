#include "dog.h"
#include "stdlib.h"

/**
 * free_dog - frees dog instances
 *
 * @d: a dog instance
 *
 * Return: no return
*/

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
