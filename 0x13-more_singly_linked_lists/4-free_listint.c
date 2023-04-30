#include "lists.h"

/**
 * free_listint - free linked list
 * @head: head of the list.
 *
 * Return: Nothing.
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while ((tmp = head) != NULL)
	{
		head = head->next;
		free(tmp);
	}
}
