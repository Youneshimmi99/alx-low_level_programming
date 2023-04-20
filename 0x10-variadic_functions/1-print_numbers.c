#include "variadic_functions.h"

/**
 * print_numbers - prints a list of numbers.
 * @delimiter: a string to be printed between numbers.
 *             If NULL, no delimiter is printed.
 * @num_args: the number of integers passed to the function.
 *            If it is 0, the function does nothing.
 *
 * Return: no return.
 */
void print_numbers(const char *delimiter, const unsigned int num_args, ...)
{
	va_list valist;
	unsigned int i;

	va_start(valist, num_args);

	for (i = 0; i < num_args; i++)
	{
		printf("%d", va_arg(valist, int));
		if (delimiter && i < num_args - 1)
			printf("%s", delimiter);
	}

	printf("\n");
	va_end(valist);
}
