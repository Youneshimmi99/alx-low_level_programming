#include "3-calc.h"

/**
 * main - Performs a arithmetic operation on two integers and prints the result
 * @argc: The number of command-line arguments
 * @argv: An array of strings containing the command-line arguments
 * Return: 0 if the program completes successfully, non-zero otherwise.
 *
 * This program takes three command-line arguments: two integers and an operator
 * symbol. The program then performs the corresponding arithmetic operation on
 * the two integers, and prints the result to standard output.
 **/
int main(int argc, char *argv[])
{
	int a, b;
	int (*op)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (argv[2][1])
	{
		printf("Error\n");
		exit(99);
	}

	op = get_op_func(argv[2]);

	if (op == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	printf("%d\n", op(a, b));
	return (0);
}