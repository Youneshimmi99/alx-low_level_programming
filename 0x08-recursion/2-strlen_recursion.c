#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to find length of
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0') /* base case */
		return 0;
	else
		return 1 + _strlen_recursion(s + 1); /* recursive call for next character */
}
