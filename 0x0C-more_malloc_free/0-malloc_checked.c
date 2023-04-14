#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc and
 * checks for errors
 * @b: The number of bytes to allocate
 *
 * Return: A pointer to the allocated memory, or exit with 
 * status 98 on failure
 */
void *malloc_checked(unsigned int i)
{
	void *k;

	k = malloc(i);
	if (k == NULL)
		exit(98);
	return (k);
}
