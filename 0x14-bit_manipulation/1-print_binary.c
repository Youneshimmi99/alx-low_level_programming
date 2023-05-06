#include "main.h"

/**
 * print_binary - Print binary representation of the number.
 * @n: The number to print in binary
 *
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
