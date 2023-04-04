#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print the sum of two diagonals of
 * the square matrix of ints
 *
 * @a: array with 2 dimensions
 * @size: the matrix size
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i = 0, len, diag_sum = 0;

	len = size * size;
	while (i < len)
	{
		diag_sum += a[i];
		i += size + 1;
	}
	printf("%d, ", diag_sum);
	i = size - 1;
	diag_sum = 0;
	while (i < len - size + 1)
	{
		diag_sum += a[i];
		i += size - 1;
	}
	printf("%d\n", diag_sum);
}
