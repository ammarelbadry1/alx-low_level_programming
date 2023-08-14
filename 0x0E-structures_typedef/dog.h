#ifndef DOG_H
#define	DOG_H

/**
 * struct dog - a struct that stores dog information
 *
 * @name: first info
 * @age: second info
 * @owner: third info
 *
 * Description: a struct that stores a dog name, age and its owner name
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * typedef struct dog dog_t - typedef of dog
 *
 * Description: new name for the type struct dog
*/

typedef struct dog dog_t;



void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
