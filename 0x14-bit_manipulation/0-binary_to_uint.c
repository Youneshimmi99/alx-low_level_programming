#include "main.h"

/**
 * binary_to_uint - converts a binary number to an
 * int.
 * @b: pointer to binary number.
 *
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	int lenght, base_two;

	if (!b)
		return (0);

	i = 0;

	for (lenght = 0; b[lenght] != '\0'; lenght++)
		;

	for (lenght--, base_two = 1; lenght >= 0; lenght--, base_two *= 2)
	{
		if (b[lenght] != '0' && b[lenght] != '1')
		{
			return (0);
		}

		if (b[lenght] & 1)
		{
			i += base_two;
		}
	}

	return (i);
}
