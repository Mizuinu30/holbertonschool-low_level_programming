#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

/**
 * malloc_checked -a function that allocates memory using malloc.
 * @b: variable to be checked.
 *
 * Return: 98.
 */

void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(sizeof(char) * b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
