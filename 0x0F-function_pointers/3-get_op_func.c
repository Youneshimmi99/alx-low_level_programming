#include "3-calc.h"

/**
 * get_op_func - Find the function associated with operator symbol
 * @symbol: char operator.
 *
 * Return: a pointer to the operation function associated with the symbol
 */
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
