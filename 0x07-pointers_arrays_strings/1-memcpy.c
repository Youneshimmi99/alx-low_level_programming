/*
 * This function copies n bytes from memory area src to memory area dest.
 * The memory areas may overlap.
 * Returns a pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
    unsigned int i;

    /* Copy bytes from src to dest */
    for (i = 0; i < n; i++) {
        *(dest + i) = *(src + i);
    }

    /* Return a pointer to the start of dest */
    return dest;
}
