#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - function that initialize a variable of type struct dog
 * @d: pointer that points dog's struct
 * @name: name parameter
 * @age: age parameter
 * @owner: owner parameter
 * Return: Nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));  /*separa 20 bytes de memoria*/
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
