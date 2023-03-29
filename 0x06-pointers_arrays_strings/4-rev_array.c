#include "main.h"

/**
 * reverse_array - reverse content of array of ints
 *
 * @a: array
 * @n: number of elements
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, temp, cond;

	if (n % 2 == 0)
		cond = n;
	else
		cond = n - 1;
	for (i = 0; i < cond / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1];
		a[n - 1] = temp;
		n--;
	}
}
