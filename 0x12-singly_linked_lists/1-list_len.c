#include "lists.h"

/**
 * list_len - traverses the linked list starting from the head node
 * @h: pointer to the head of the list
 * Return: number of elements in a linked list
 */

size_t list_len(const list_t *h)
{

unsigned int n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
