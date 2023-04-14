#include <stdlib.h>

/**
 * array_range - Creates an array of integers containing a range of values
 *
 * @min: The smallest number to be stored in the array
 * @max: The largest number to be stored in the array
 *
 * Return: A pointer to the newly created array, or NULL if the function fails
 *
 * This function creates an array of integers containing a range of values from
 * min to max, both inclusive. If min is greater than max, the function returns
 * NULL. If the function fails to allocate memory for the array, it also returns
 * NULL. Otherwise, the function returns a pointer to the newly created array.
 */
int *array_range(int min, int max)
{
	int *p;
	int length, num, index;

	if (min > max)
		return (0);
	length = (max - min) + 1;
	p = malloc(sizeof(int) * length);
	if (p == 0)
		return (0);
	for (num = min, index = 0; num <= max; index++, num++)
		*(p + index) = num;
	return (p);
}
