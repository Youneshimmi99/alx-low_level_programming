#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array of elements
 * and initializes the memory to zero
 * @num_elements: The number of elements in the array
 * @element_size: The element_size of each element in the array
 *
 * Return: A pointer to the allocated memory,
 * or NULL if the function fails
 *
 * Description: This function allocates memory for an array of
 * num_elements elements, each of element_size bytes, using malloc.
 * It then initializes the memory to zero using a for loop.
 */
void *_calloc(unsigned int num_elements, unsigned int element_size)
{
	unsigned int i;
	char *arr;

	if (num_elements == 0 || element_size == 0)
		return (NULL);
	arr = malloc(num_elements * element_size);
	if (arr == NULL)
		return (arr);
	for (i = 0; i < (num_elements * element_size); i++)
		arr[i] = 0;
	return (arr);
}
