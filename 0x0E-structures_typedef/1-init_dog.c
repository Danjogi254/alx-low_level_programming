#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializing a struct dog varaible
 * @d: pointer to the struct dog to initialize
 * @name:Initialization name
 * @age: age
 * @owner: owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
