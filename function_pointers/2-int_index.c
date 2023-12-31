#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * int_index - a funtion that searches for integers/
 * @array: pointer to be verified.
 * @size:parameter to verify what's on the array.
 * @cmp: pointer to be passed/
 *
 * Return: array or -1 if it's NULL.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}

	return (-1);
}

