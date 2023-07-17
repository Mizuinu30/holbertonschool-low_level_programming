#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * init_dog -a function that initializes a variable of
 * type struct dog.
 * @d: pointer too struct dog
 * @name: user name.
 * @age: users age.
 * @owner:dog's owner.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
