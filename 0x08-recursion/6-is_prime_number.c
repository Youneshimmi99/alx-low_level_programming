#include "main.h"

/**
 * is_prime_number - returns 1 if input of integer is a prime number,
 * else returns 0
 *
 * @num: number
 * Return: int
 */
int is_prime_number(int num)
{
	int k = 2;

	if (num <= 2)
		return (num == 2 ? 1 : 0);
	if (num % 2 == 0)
		return (0);
	return (is_prime(num, k));
}

/**
 * is_prime - returns 1 if input of integer is a prime number,
 * else returns 0
 *
 * @num: number
 * @k: divided
 * Return: int
 */
int is_prime(int num, int k)
{
	if (num != k && num % k == 0)
		return (0);
	else if (num == k)
		return (1);
	return (is_prime(num, k + 1));
}