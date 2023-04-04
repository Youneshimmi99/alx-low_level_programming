#include "main.h"

/**
 * _strchr - function that locates a character in a string
 *
 * @s: string that will be searched for
 * @c: character that we will search for
 * Return: pointer to first occurence of c if it's there or NULL otherwise
 */
char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
		{
			return (s);
		}
	} while (*s++);
	return (NULL);
}
