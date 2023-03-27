/**
 * *_strcpy - copy string to a memory location
 * @dest: where to be copy from
 * @src: place of the string
 *
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0;

	while (*(src + len) != '\0')
	{
		*(dest + len) = *(src + len);
		len++;
	}
	*(dest + len) = *(src + len);

	return (dest);
}
