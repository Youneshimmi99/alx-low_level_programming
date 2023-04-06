#include "main.h"

/**
 * _sqrt_recursion - returns square root of number
 *
 * @num: number
 * Return: int
 */
int _sqrt_recursion(int num)
{
	int square = 2;

	if (num < 0)
		return (-1);
	else if (num == 0 || num == 1)
		return (num);
	return (is_sqrt(num, square));
}

/**
 * is_sqrt - function to check whether it's a natural square root or not
 *
 * @num: number
 * @square: test number
 * Return: int
 */
int is_sqrt(int num, int square)
{
	if (square * square == num)
		return (square);
	else if (square * square < num)
		return (is_sqrt(num, square + 1));
	else if (square * square > num)
		return (-1);
	return (-1);
}