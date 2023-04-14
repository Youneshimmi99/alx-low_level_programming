#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 *
 * @i: The number of bytes to allocate
 * Return: A pointer to the allocated memory
 */
void *malloc_checked(unsigned int i)
{
	void *k;

	k = malloc(i);
	if (k == NULL)
		exit(98);
	return (k);
}
