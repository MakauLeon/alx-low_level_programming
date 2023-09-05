#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes a variable of type struct dog
 * @d: struct dog variable
 * @name: member name of dog
 * @age: member age of dog
 * @owner: member owner of dog
 *
 * Return: nothing
 **/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
