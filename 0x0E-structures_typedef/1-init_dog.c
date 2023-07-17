#include "dog.h"
/**
 * init_dog - a function that initialize a variable of type struct dog
 *
 * @d: dog struct
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
