#include "variadic_functions.h"

/**
 * sum_them_all - calculate sum of all parameters.
 * @num_args: the number of arguments being passed.
 *
 * Return: sum of its parameters.
 */
int sum_them_all(const unsigned int num_args, ...)
{
	va_list arg_list;
	int arg_sum = 0;
	unsigned int i;

	if (num_args == 0)
		return (0);

	va_start(arg_list, num_args);

	for (i = 0; i < num_args; i++)
		arg_sum += va_arg(arg_list, int);

	va_end(arg_list);

	return (arg_sum);
}
