#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - applies a given function to each element of an array
 * @arr: pointer to the array
 * @arr_size: size of the array
 * @apply_func: pointer to the function to apply to each element
 *
 * This function takes a pointer to an array, its size, and a pointer to a
 * function. It applies the function to each element of the array in turn.
 */
void array_iterator(int *arr, size_t arr_size, void (*apply_func)(int))
{
size_t n;

if (arr == NULL || apply_func == NULL)
{
return;
}

for (n = 0; n < arr_size; n++)
{
apply_func(arr[n]);
}
}
