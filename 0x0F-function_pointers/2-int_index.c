#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - searches for an integer in an array using a comparison function
 * @arr: pointer to the array of integers
 * @arr_size: number of elements in the array
 * @compare: pointer to the comparison function
 * Return: If the integer is found, its index in the array. Otherwise, -1
 *
 * This function searches for an integer in an array by applying a comparison
 * function to each element of the array. The comparison function should return
 * non-zero if the element matches the desired integer, and zero otherwise. If
 * the integer is found, the function returns its index in the array. If not,
 * the function returns -1.
**/
int int_index(int *arr, int arr_size, int (*compare)(int))
{
	int n;

	if (arr == NULL || compare == NULL)
	{
		return (-1);
	}

	if (arr_size <= 0)
	{
		return (-1);
	}

	for (n = 0; n < arr_size; n++)
	{
		if (compare(arr[n]))
		{
			return (n);
		}
	}

	return (-1);
}
