#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenates two strings.
 * @str1: the first string to concatenate.
 * @str2: the second string to concatenate.
 *
 * Return: a pointer to the resulting string, or NULL on failure.
 */
char *str_concat(char *str1, char *str2)
{
	unsigned int size1 = 0, size2 = 0;
	char *ptr, *ret;

	ptr = str1;
	if (str1)
		while (*ptr++)
			size1++;
	else
		str1 = "";

	ptr = str2;
	if (str2)
		while (*ptr++)
			size2++;
	else
		str2 = "";

	ret = malloc(size1 + size2 + 1);
	if (!ret)
		return (NULL);

	ptr = ret;
	while (*str1)
		*ptr++ = *str1++;
	while (*str2)
		*ptr++ = *str2++;
	*ptr = 0;

	return (ret);
}