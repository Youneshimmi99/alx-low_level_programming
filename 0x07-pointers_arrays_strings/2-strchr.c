/**
 * This function searches for a specified character within a given string.
 *
 * @param s The string to be searched.
 * @param c The character to search for.
 * @return A pointer to the first occurrence of the character in the string,
 *         or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
    // iterate through each character in the string
    do {
        // if the current character matches the search character, return a pointer to it
        if (*s == c) {
            return s;
        }
    } while (*s++);
    
    // if the search character is not found, return NULL
    return NULL;
}
