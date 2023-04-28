#include "lists.h"

/**
 * print_list - Prints elements of linked list
 * @h: Pointer to the h of the list
 * Return: Count number
**/

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);
}
