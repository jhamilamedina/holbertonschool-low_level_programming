#ifndef __DOG_H__
#define __DOG_H__
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
/**
 * struct dog - Structut for created a dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
 * struct dog_t - new name for the type struct dog
 * @name: name of dog
 * @age: age a dog
 * @owner: owner of dog
 */

typedef struct dog_t
{
	char *name;
	float age;
	char *owner;
} dog_t;
#endif
