#include <stdio.h>

/**
 * print_array - print first elements of an array
 * @a: int array to display elements from
 * @n: number of elements to display from array
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i == n - 1)
			printf("%d", *(a + i));
		else
			printf("%d, ", *(a + i));
		i++;
	}
	printf("\n");
}
