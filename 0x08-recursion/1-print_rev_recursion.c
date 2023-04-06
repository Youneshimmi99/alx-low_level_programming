#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string to be printed
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0') /* base case */
		return;
	_print_rev_recursion(s + 1); /* recursive call for next character */
	_putchar(*s); /* print current character */
}