#include <stdlib.h>

/**
 * array_range - Creates an array of integers containing a range of values
 *
 * @min: The smallest number to be stored in the array
 * @max: The largest number to be stored in the array
 *
 * Return: A pointer to the newly created array, or NULL if the function fails
 */
int *array_range(int min, int max)
{
	int num, length;
    int *p;

	if (min > max)
		return (NULL);
	length = max - min + 1;
	p = malloc(sizeof(int) * length);
	if (p == NULL)
		return (NULL);
	for (num = 0; num < length; num++, min++)
	{
		p[num] = min;
	}
	return (p);
}
