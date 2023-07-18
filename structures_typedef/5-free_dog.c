#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - a function that frees dogs.
 * @d:pointer to structure
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}

}
