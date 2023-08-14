#include "dog.h"
#include <stdlib.h>

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

/**
 * new_dog - creates a new dog instance
 *
 * @name: first info
 * @age: second info
 * @owner: third info
 *
 * Return: a pointer to the dog_t instance
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int name_len, owner_len;
	int i;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL || name == NULL || owner == NULL)
	{
		free(dog);
		return (NULL);
	}
	name_len = _strlen(name);
	owner_len = _strlen(owner);
	dog->name = malloc((name_len + 1) * sizeof(char));
	dog->owner = malloc((owner_len + 1) * sizeof(char));
	if (dog->name == NULL || dog->owner == NULL)
	{
		free(dog->name);
		free(dog->owner);
		free(dog);
		return (NULL);
	}
	i = 0;
	while (i < name_len)
	{
		dog->name[i] = name[i];
		i++;
	}
	dog->name[i] = 0;
	dog->age = age;
	i = 0;
	while (i < owner_len)
	{
		dog->owner[i] = owner[i];
		i++;
	}
	dog->owner[i] = 0;
	return (dog);
}
