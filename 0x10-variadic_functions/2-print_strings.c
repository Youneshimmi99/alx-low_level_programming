#include "variadic_functions.h"

/**
 * print_strings - prints a list of strings.
 * @delimiter: a string to be printed between the strings.
 *             If NULL, no delimiter is printed.
 * @num_args: the number of strings passed to the function.
 *            If it is 0, the function does nothing.
 *
 * Return: nothing.
 */
void print_strings(const char *delimiter, const unsigned int num_args, ...)
{
	va_list arg_list;
	char *current_str;
    unsigned int i;

	va_start(arg_list, num_args);

	for (i = 0; i < num_args; i++)
	{
		current_str = va_arg(arg_list, char *);

		if (current_str)
			printf("%s", current_str);
		else
			printf("(nil)");

		if (i < num_args - 1)
			if (delimiter)
				printf("%s", delimiter);
	}

	printf("\n");
	va_end(arg_list);
}
