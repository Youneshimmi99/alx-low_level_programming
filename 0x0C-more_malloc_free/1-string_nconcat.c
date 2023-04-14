#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings up to n bytes
 * @str1: The first string to concatenate
 * @str2: The second string to concatenate
 * @num: The maximum number of bytes to concatenate from str2
 *
 * Return: A pointer to a newly allocated space in memory
 */
char *string_nconcat(char *str1, char *str2, unsigned int num)
{
	unsigned int i, j, k;
	char *s;

	if (str1 == NULL)
		i = 0;
	else
	{
		for (i = 0; str1[i]; i++)
			;
	}
	if (str2 == NULL)
		j = 0;
	else
	{
		for (j = 0; str2[j]; j++)
			;
	}
	if (j > num)
		j = num;
	s = malloc(sizeof(char) * (i + j + 1));
	if (s == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		s[k] = str1[k];
	for (k = 0; k < j; k++)
		s[k + i] = str2[k];
	s[i + j] = '\0';
	return (s);
}
