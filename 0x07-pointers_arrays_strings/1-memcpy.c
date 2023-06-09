/**
 * _memcpy - Copies 'n' bytes from memory area 'src' to memory area 'dest'.
 * @dest: Pointer to the destination array to copy to.
 * @src: Pointer to the source array to copy from.
 * @n: Number of bytes to copy.
 *
 * Return: Pointer to the destination array.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
