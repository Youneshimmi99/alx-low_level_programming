#include <stdlib.h>

/**
 * *array_range - Creates an array of integers then store numbers min to max,
 * in the array
 * @min: the smallest number to be stored
 * @max: The largest number to be stored
 *
 * Return: pointer to the newly created array if success,
 * else NULL
 */
int *array_range(int min, int max)
{
	int *arr;
	int lenght, num, index;

	if (min > max)
		return (0);
	lenght = (max - min) + 1;
	arr = malloc(sizeof(int) * lenght);
	if (arr == 0)
		return (0);
	for (num = min, index = 0; num <= max; index++, num++)
		*(arr + index) = num;
	return (arr);
}
