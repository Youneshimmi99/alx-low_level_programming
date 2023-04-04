#include "main.h"

/**
 * _strpbrk - locate the first occurence of any bytes
 *
 * @s: string we will work on
 * @accept: pattern that will match against
 * Return: pointer pointing to the first match
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}
	return (NULL);
}
