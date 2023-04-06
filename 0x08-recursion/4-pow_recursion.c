#include "main.h"

/**
 * _pow_recursion - returns value of 'a' raised to the power of 'b'
 *
 * @a: number to be raised
 * @b: power of number to be raised
 * Return: int of 'a' to the power of 'b'
 */
int _pow_recursion(int a, int b)
{
	if (b < 0)
		return (-1);
	else if (b == 0)
		return (1);
	return (a * _pow_recursion(a, b - 1));
}