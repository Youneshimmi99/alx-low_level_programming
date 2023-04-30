#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a linked list.
 * @head: Pointer to a pointer to the head of the linked list.
 * @n: Integer value to be stored in the new node.
 *
 * Return: address of the new element. NUll if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_elem;

	new_elem = malloc(sizeof(listint_t));

	if (new_elem == NULL)
		return (NULL);

	new_elem->n = n;
	new_elem->next = *head;
	*head = new_elem;

	return (*head);
}
