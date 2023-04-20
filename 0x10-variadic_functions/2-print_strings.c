#include "variadic_functions.h"

/**
 * print_strings - prints a list of strings
 * @delimiter: string to printe between the strings
 * @num_args: number of strings passed to the function
 *
 * Return: no return.
 */
void print_strings(const char *delimiter, const unsigned int num_args, ...)
{
	va_list valist;
	unsigned int i;
	char *current_str;

	va_start(valist, num_args);

	for (i = 0; i < num_args; i++)
	{
		current_str = va_arg(valist, char *);

		if (current_str)
			printf("%s", current_str);
		else
			printf("(nil)");

		if (i < num_args - 1)
			if (delimiter)
				printf("%s", delimiter);
	}

	printf("\n");
	va_end(valist);
}
