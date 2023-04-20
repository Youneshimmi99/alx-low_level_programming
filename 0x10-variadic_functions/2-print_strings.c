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
	char *str_to_print;
    unsigned int i;

	va_start(arg_list, num_args);

	for (i = 0; i < num_args; i++)
	{
		str_to_print = va_arg(arg_list, char *);

		if (str_to_print)
			printf("%s", str_to_print);
		else
			printf("(nil)");

		if (i < num_args - 1)
			if (delimiter)
				printf("%s", delimiter);
	}

	printf("\n");
	va_end(arg_list);
}
