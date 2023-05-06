#include "main.h"

/**
 * get_bit - Get the value of bit at the given index.
 * @n: The integer bit.
 * @index: Index to get the value at.
 *
 * Return: Value of bit at index.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
