#include "main.h"

/**
 * _strlen - check the length of string
 * @s: string to check the lenght
 *
 * Return: int the length of string
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length])
		length++;
	return (length);
}
