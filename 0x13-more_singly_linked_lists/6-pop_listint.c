#include "lists.h"

/**
 * pop_listint - delete head of node
 * a linked list
 * @head: head of the list.
 *
 * Return: The head of node's data.
 */
int pop_listint(listint_t **head)
{
	int node;
	listint_t *h;
	listint_t *current;

	if (*head == NULL)
		return (0);

	current = *head;

	node = current->n;

	h = current->next;

	free(current);

	*head = h;

	return (node);
}
