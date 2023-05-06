#include "main.h"
#include <stdio.h>

/**
 * _strlen - calculates the length of a string
 * @str: pointer to the char
 * Return: the length of string
 */
int _strlen(const char *str)
{
	int n = 0, lenght = 0;

	while (str[n] != '\0')
	{
		lenght++;
		n++;
	}
	return (lenght);
}

/**
 * binary_to_uint - Convert binary to unsigned int
 * @b: Pointer to binary the number
 * Return: Converted result
 */
unsigned int binary_to_uint(const char *b)
{
	int i, powe = 1;
	unsigned int sum = 0;

	for (i = _strlen(b); i > 0; i--)
	{
		if ((b[i - 1] - '0') == 0 || (b[i - 1] - '0') == 1)
		{
			sum += (b[i - 1] - '0') * powe;
			powe *= 2;
		}
		else
		{
			return (0);
		}
	}
	return (sum);
}
