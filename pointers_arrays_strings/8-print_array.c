#include "main.h"
#include <stdio.h>

/**
 *print_array - a function that prints n elements of an array of integers,
 *followed by a new line.
 *@a: array var.
 *@n: numbers of elemnets of the array to be printed.
 *Return: always (0).
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}
