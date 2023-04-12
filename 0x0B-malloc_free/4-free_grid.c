#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees a 2D array of integers with
 * the given height.
 * @array: the 2D array to free.
 * @height: the height of the array.
 *
 * Return: void.
 */
void free_grid(int **array, int height)
{
	int row;

	if (array != NULL || height != 0)
	{
		for (row = 0; row < height; row++)
		{
			free(array[row]);
		}
		free(array);
	}
}
