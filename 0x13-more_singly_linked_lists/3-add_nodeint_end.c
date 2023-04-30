#include "lists.h"

/**
 * add_nodeint_end - add new node at the end
 * of a linked list
 * @head: head of list.
 * @n: n element of list.
 *
 * Return: address of the new element. or NUll.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_elem;
	listint_t *tmp;

	(void)tmp;

	new_elem = malloc(sizeof(listint_t));

	if (new_elem == NULL)
		return (NULL);

	new_elem->n = n;
	new_elem->next = NULL;
	tmp = *head;
	if (*head == NULL)
	{
		*head = new_elem;
	}
	else
	{
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = new_elem;
	}

	return (*head);
}
