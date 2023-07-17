#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - Write a function that creates a new dog.
 *
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: pointer to new dog struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int name_l = 0, owner_l = 0, i;

	while (name[name_l] != '\0')
		name_l++;
	while (owner[owner_l] != '\0')
		owner_l++;
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->name = malloc(sizeof(new_dog->name) * name_l);
	if (new_dog->name == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	for (i = 0; i <= name_l; i++)
		new_dog->name[i] = name[i];
	new_dog->age = age;
	new_dog->owner = malloc(sizeof(new_dog->owner) * owner_l);
	if (new_dog->owner == NULL)
	{
		free(new_dog->owner);
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	for (i = 0; i <= owner_l; i++)
	new_dog->owner[i] = owner[i];
	return (new_dog);
}
