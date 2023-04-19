#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name using a given printing function
 * @name: pointer to the name to print
 * @printer: pointer to the function that prints the name
**/

void print_name(char *name, void (*printer)(char *))
{
	if (name == NULL || printer == NULL)
	{
		return;
	}
	else
	{
		printer(name);
	}
}