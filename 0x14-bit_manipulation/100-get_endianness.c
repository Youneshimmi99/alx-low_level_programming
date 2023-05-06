#include "main.h"

/**
 * get_endianness - Determines the endianness of
 * the current machine.
 *
 * Return: 0 If the machine is big-endian. else 1.
 */
int get_endianness(void)
{
	int n = 1;
	char *byte = (char *)&n;

	if (*byte == 1)
		return (1);

	return (0);
}
