#include "main.h"
#include <stdio.h>

/**
 * reverse_array - function that reverses the content of an array.
 * @a:array input
 * @n: number of elements of the array.
 *
 * Return: array in reverse.
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	temp = n - 1;
	for (i = 0; i < n / 2; i++)
	{
		int start, end;

		start = a[i];
		end = a[temp];
		a[i] = end;
		a[temp] = start;
		temp--;
	}
}
