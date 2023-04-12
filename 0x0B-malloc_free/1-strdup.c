#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: the string to duplicate
 *
 * Return: pointer to the duplicate string, or NULL if str is NULL or if memory
 * allocation fails.
 */
char *_strdup(char *str)
{
	char *duplicate_str;
	unsigned int str_len, i;

	if (str == NULL)
	{
		return (NULL);
	}

	str_len = 0;
	while (str[str_len] != '\0')
	{
		str_len++;
	}

	duplicate_str = malloc(sizeof(char) * (str_len + 1));

	if (duplicate_str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < str_len; i++)
	{
		duplicate_str[i] = str[i];
	}
	duplicate_str[str_len] = '\0';

	return (duplicate_str);
}