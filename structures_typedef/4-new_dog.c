#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - a function that creates a new dog.
 * @name: dog's name.
 * @age: dog's age.
 * @owner: dog's owner.
 *
 * Return: Null if function fails.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
/*pointer to structure*/
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		return (NULL);
	}

	new_dog->name = malloc(strlen(name) * sizeof(char) + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->owner = malloc(strlen(owner) * sizeof(char) + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	new_dog->name = strdup(name);
	new_dog->owner = strdup(owner);

	new_dog->age = age;

	return (new_dog);
}
