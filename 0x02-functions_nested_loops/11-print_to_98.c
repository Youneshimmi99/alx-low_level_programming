#include <stdio.h>

/**
 * print_to_98 - Prints natural numbers starting from input to 98,
 *               separated by a comma.
 * @n: Number to begin with.
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}

	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
