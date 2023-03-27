#include "main.h"

/**
 * swap_int - swap the values pointed to by arguments
 *
 * @a: pointer arg 1
 * @b: pointer arg 2
 */
void swap_int(int *a, int *b)
{
	int con = *a;

	*a = *b;
	*b = con;
}
