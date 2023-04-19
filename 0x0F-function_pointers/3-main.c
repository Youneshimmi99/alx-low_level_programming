#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
if (argc != 4)
{
printf("Error\n");
exit(98);
}

if (
(strcmp(argv[2], "+") && strcmp(argv[2], "-") &&
strcmp(argv[2], "*") && strcmp(argv[2], "/") &&
strcmp(argv[2], "%"))
)
{
printf("Error\n");
exit(99);
}

if ((strcmp(argv[2], "/") == 0 || strcmp(argv[2], "%") == 0)
&& atoi(argv[3]) == 0)
{
printf("Error\n");
exit(100);
}

printf("%d\n", (*get_operation_function(argv[2]))(atoi(argv[1]), atoi(argv[3])));

return (0);
}
