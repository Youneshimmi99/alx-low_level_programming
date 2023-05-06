#include "main.h"

/**
 * set_bit - Set value of bit at the given index to 1.
 * @n: pointer to the integer bit.
 * @index: Index to get the value at.
 *
 * Return: If error -1. if not 1.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
