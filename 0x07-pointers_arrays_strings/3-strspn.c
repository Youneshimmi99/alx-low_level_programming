#include "main.h"

/**
 * This function gets the length of the initial substring in s that consists
 * entirely of characters from accept.
 *
 * @param s The string to work on.
 * @param accept The pattern to match against.
 * @return An unsigned integer representing the number of initial bytes in s that match the pattern.
 */
unsigned int _strspn(char *s, char *accept)
{
    unsigned int i, j, len = 0, match = 0;

    // iterate through each character in s
    for (i = 0; s[i] != '\0'; i++)
    {
        // iterate through each character in accept
        for (j = 0; accept[j] != '\0'; j++)
        {
            // if the current character in s matches the current character in accept, increment len
            if (s[i] == accept[j])
            {
                len++;
                break;
            }
        }
        // if len is not 0, increment match
        if (len != 0)
            match++;
        // if match is not equal to len, return len
        if (match != len)
            return (len);
    }
    // if no matches were found, return 0
    return (0);
}

