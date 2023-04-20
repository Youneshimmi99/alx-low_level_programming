#include "variadic_functions.h"

/**
 * print_all - prints a list of arguments of various types.
 * @type_string: a string containing the types of arguments to print.
 *
 * Return: nothing.
 */
void print_all(const char * const type_string, ...)
{
	va_list arg_list;
	unsigned int i = 0, j, c = 0;
	char *str;
	const char t_arg[] = "cifs";

	va_start(arg_list, type_string);
	while (type_string && type_string[i])
	{
		j = 0;
		while (t_arg[j])
		{
			if (type_string[i] == t_arg[j] && c)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (type_string[i])
		{
		case 'c':
			printf("%c", va_arg(arg_list, int)), c = 1;
			break;
		case 'i':
			printf("%d", va_arg(arg_list, int)), c = 1;
			break;
		case 'f':
			printf("%f", va_arg(arg_list, double)), c = 1;
			break;
		case 's':
			str = va_arg(arg_list, char *), c = 1;
			if (!str)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
			break;
		} i++;
	}
	printf("\n"), va_end(arg_list);
}
