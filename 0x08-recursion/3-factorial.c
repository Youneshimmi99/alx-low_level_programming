#include "main.h"

/**
 * factorial - returns the factorial of a given number or -1 if n is negative
 *
 * @num: number to factorize
 * Return: the factorial of the number, or -1 if the number is negative
 */
int factorial(int num)
{
	if (num < 0)
		return (-1);
	else if (num == 0)
		return (1);
	return (num * factorial(num - 1));
}
