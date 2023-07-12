#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * alloc_grid - a function that returns a pointer
 * to a 2 dimensional array of integers.
 * @width: points to the width of nthe grid.
 * @height: points the heightof the grid.
 * Return: NULL on failure and grid on success.
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	grid = (int **)malloc(height * sizeof(int));
	if (height <= 0 || width <= 0)
		return (NULL);

	if (grid == NULL)
	{
		return (NULL);
	
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
