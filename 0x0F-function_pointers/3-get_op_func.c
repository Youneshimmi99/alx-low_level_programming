#include "3-calc.h"

/**
 * get_operation_function - Finds the function associated with an operator symbol
 * @symbol: a string representing an operator symbol
 * Return: a pointer to the operation function associated with the symbol, or
 * NULL if no matching operation is found.
 *
 * This function searches an array of operation_t structs for a struct with a
 * matching symbol field. If a matching struct is found, the associated operation
 * function is returned. If no matching struct is found, NULL is returned.
 **/
int (*get_op_func(char *symbol))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (i < 10)
	{
		if (symbol[0] == ops->op[i])
			break;
		i++;
	}

	return (ops[i / 2].f);
}
