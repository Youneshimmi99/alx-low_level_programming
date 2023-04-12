#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * alloc_grid - allocates a 2D array of integers with the given width and height.
 * @width: the width of the array.
 * @height: the height of the array.
 *
 * Return: a pointer to the newly allocated 2D array, or NULL on failure.
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int row, col;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = malloc(height * sizeof(int *));
	if (array == NULL)
		return (NULL);

	for (row = 0; row < height; row++)
	{
		array[row] = malloc(width * sizeof(int));
		if (array[row] == NULL)
		{
			while (row >= 0)
				free(array[row--]);
			free(array);
			return (NULL);
		}


		for (col = 0; col < width; col++)
			array[row][col] = 0;
	}

	return (array);
}