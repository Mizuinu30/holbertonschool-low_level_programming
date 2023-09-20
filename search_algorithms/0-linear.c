#include "search_algos.h"

/**
 * linear_search -  a function that searches for a value in an array 
 * of integers using the Linear search algorithm.
 * @array: a pointer to the first element.
 * @size: numbers of elements in the array.
 * @value: the value to search for.
 * @Return: Null if value not present otherwise -1.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}

