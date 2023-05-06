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
	int l, base_two;

	if (!b)
		return (0);

	i = 0;

	for (l = 0; b[l] != '\0'; l++)
		;

	for (l--, base_two = 1; l >= 0; l--, base_two *= 2)
	{
		if (b[l] != '0' && b[l] != '1')
		{
			return (0);
		}

		if (b[l] & 1)
		{
			i += base_two;
		}
	}

	return (i);
}
