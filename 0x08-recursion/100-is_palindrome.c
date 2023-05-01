#include "main.h"

/**
 * get_string_length - Returns the length of a string
 * @s: The string to get the length of
 *
 * Return: The length of the string
 */
int get_string_length(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + get_string_length(s + 1));
	}
}

/**
 * check_palindrome - Checks if a string is a palindrome
 * @s: The string to check
 * @length: The length of the string
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int check_palindrome(char *s, int length)
{
	if (length <= 1)
	{
		return (1);
	}
	else if (*s == *(s + (length - 1)))
	{
		return (check_palindrome(s + 1, length - 2));
	}
	else
	{
		return (0);
	}
}

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: The string to check
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int length = get_string_length(s);
	return (check_palindrome(s, length));
}
