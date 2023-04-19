#include "3-calc.h"

/**
 * op_add - Adds two numbers
 * @a: the first number to add
 * @b: the second number to add
 *
 * Return: the sum of the two numbers
 **/
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtracts two numbers
 * @a: the number to subtract from
 * @b: the number to subtract
 *
 * Return: the result of the subtraction operation
 **/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplies two numbers
 * @a: the first number to multiply
 * @b: the second number to multiply
 *
 * Return: the product of the multiplication
 **/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divides two numbers
 * @a: the dividend
 * @b: the divisor
 *
 * Return: the quotient of the division operation
 **/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Calculates the remainder of a division operation
 * @a: the dividend
 * @b: the divisor
 *
 * Return: the remainder of the division operation
 **/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
