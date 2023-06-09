#include "lists.h"

/**
  * print_listint - Print elements of linked list
  * @h: Pointer to the head of the linked list
  *
  * Return: The number of nodes in the linked list
  */
size_t print_listint(const listint_t *h)
{
	int count;

	count = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
