#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a structure for dog.
 *
 * @name: dogs name
 * @age: dogs age
 * @owner: name of dogs owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif