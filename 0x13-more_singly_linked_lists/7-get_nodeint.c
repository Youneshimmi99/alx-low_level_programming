#include "lists.h"

/**
 * get_nodeint_at_index - returns the node of a list
 * @head: head of the list.
 * @index: index related to the node.
 *
 * Return: node. If does not exist, returns NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n;

	for (n = 0; n < index && head != NULL; n++)
	{
		head = head->next;
	}

	return (head);
}
