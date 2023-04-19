#include "3-calc.h"
#include <stdio.h>
#include <string.h>

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
int (*get_operation_function(char *symbol))(int, int)
{
operation_t operations[] = {
{"+", add},
{"-", subtract},
{"*", multiply},
{"/", divide},
{"%", modulo},
{NULL, NULL}
};

int i = 0;

while (operations[i].symbol != NULL)
{
if (!strcmp(operations[i].symbol, symbol))
{
return (operations[i].operation);
}
i++;
}

return (NULL);
}
