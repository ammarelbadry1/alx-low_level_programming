#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 *
 * @d: struct dog address
 * @name: struct first member
 * @age: second memeber
 * @owner: third member
 *
 * Return: no return
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
