#include "function_pointers.h"
#include <stdio.h>
#include <string.h>


/**
 * array_iterator - a function that executes a function
 * given as a parameter on each element of an array.
 * @array: points to an arrayu of ints.
 * @size: holds a size.
 * @action: points to a function.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
