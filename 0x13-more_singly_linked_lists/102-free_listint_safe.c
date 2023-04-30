#include "lists.h"

/**
 * free_listp2 - free linked list
 * @head: Pointer of pointer to head of list.
 *
 * Return: Nothing
 */
void free_listp2(listp_t **head)
{
	listp_t *tmp;
	listp_t *current;

	if (head != NULL)
	{
		current = *head;
		while ((tmp = current) != NULL)
		{
			current = current->next;
			free(tmp);
		}
		*head = NULL;
	}
}

/**
 * free_listint_safe - free linked list.
 * @head: Pointer of pointer to head of list.
 *
 * Return: the number of nodes
 */
size_t free_listint_safe(listint_t **h)
{
	size_t num_nodes = 0;
	listp_t *tr, *new, *add;
	listint_t *current;

	tr = NULL;
	while (*h != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)*h;
		new->next = tr;
		tr = new;

		add = tr;

		while (add->next != NULL)
		{
			add = add->next;
			if (*h == add->p)
			{
				*h = NULL;
				free_listp2(&tr);
				return (num_nodes);
			}
		}

		current = *h;
		*h = (*h)->next;
		free(current);
		num_nodes++;
	}

	*h = NULL;
	free_listp2(&tr);
	return (num_nodes);
}
