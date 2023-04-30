#include "lists.h"

/**
 * insert_nodeint_at_index - insert new node
 * in a position.
 * @head: head of the list.
 * @idx: index of the list where we add node
 * @n: int element.
 *
 * Return: Address of the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int n;
	listint_t *new_node;
	listint_t *h;

	h = *head;

	if (idx != 0)
	{
		for (n = 0; n < idx - 1 && h != NULL; n++)
		{
			h = h->next;
		}
	}

	if (h == NULL && idx != 0)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		new_node->next = h->next;
		h->next = new_node;
	}

	return (new_node);
}
