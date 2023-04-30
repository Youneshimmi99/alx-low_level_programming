#include "lists.h"

/**
 * reverse_listint - reverse the linked list.
 * @head: Pointer of pointer to head list.
 *
 * Return: The pointer related first node.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *pt;
	listint_t *i;

	pt = NULL;
	i = NULL;

	while (*head != NULL)
	{
		i = (*head)->next;
		(*head)->next = pt;
		pt = *head;
		*head = i;
	}

	*head = pt;
	return (*head);
}
