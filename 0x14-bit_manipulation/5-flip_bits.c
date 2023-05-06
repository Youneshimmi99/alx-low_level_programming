#include "main.h"

/**
 * flip_bits - Count number of bits to be
 * flipped to get from one number into another.
 * @n: Number that will be flipped.
 * @m: Number to flip to.
 *
 * Return: Nnumber of bits to flip to get from n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int tmp = n ^ m, bit = 0;

	while (tmp > 0)
	{
		bit += (tmp & 1);
		tmp >>= 1;
	}

	return (bit);
}